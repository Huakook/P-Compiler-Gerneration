%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "p2c.h"
	#include "p2c_tree.h"
%}
%token PROG PROC BG END INT BOOL TRUE
%token LP RP LSP RSP FALSE CC STRING
%token DOT SEMI VAR ARRAY OF DOTDOT
%token IF THEN READ WRITE WHILE DO
%token ELSE ASSIGN COMMA COLON ID NUM
%left OR AND
%left NOT
%left EQ NE LT GT LE GE
%left ADD MINUS
%left DIV TIMES

//the type for symbols are declare this way
//sm, wx, nu, sr are just their names

%union{ pSTM* sm; //statement
        pEXP* ex; //expression
        int   nu; //number
		char* sr; //string
      }

%type <sm> prog
%type <sm> block
%type <sm> vardecs
%type <sm> morevd
%type <sm> vardec
%type <sm> prodecs
%type <sm> proc
%type <sm> stmts
%type <sm> comstmt
%type <sm> morestm
%type <sm> stmt
%type <sm> simstmt
%type <sm> asstate
%type <sm> prostate
%type <sm> restate
%type <sm> wristate
%type <sm> strstmt
%type <sm> ifstate
%type <sm> whilest
%type <ex> moreid
%type <ex> type
%type <ex> arrtype
%type <ex> inrange
%type <ex> simtype
%type <ex> moreinvar
%type <ex> invar
%type <ex> outvalue
%type <ex> moreoutval
%type <ex> express
%type <ex> simexpre
%type <ex> addterm
%type <ex> term
%type <ex> multifac
%type <ex> factor
%type <ex> constant
%type <ex> relatop
%type <ex> sign
%type <ex> addoper
%type <ex> multiop
%type <ex> variable
%type <ex> indexvar
%type <nu> NUM
%type <sr> CC
%type <sr> ID
%type <sr> STRING

%expect 1 

%%
prog 	:	PROG ID SEMI block DOT
		{ program = $4;
			printf("PROG\n");
		  program->stm_id = sPROG;
		  program->exp1 = create_exp();
		  program->exp1->exp_id = eID;
		  strcpy(program->exp1->name, $2);
		  $$ = program;
		}
	|
		{ program = NULL;
		  $$ = program;
		}
	;

//A -> X1 X2 ... Xk
//$$ return value of A
//$k return value of Xk
block	:	vardecs prodecs stmts
		{   $$ = create_stm();
		    $$->stm_id = sBLOCK;
		    $$->stm1 = $1;//use $$ to store what returned from vardecs
		    $$->stm2 = $2;//..what returned from prodecs
		    $$->next = $3;//..what returned  from stmts
		}
	;

vardecs	:	VAR vardec SEMI morevd
		{ $$ = create_stm();
		  $$->stm_id = sVARDECS;
		  $$->stm1 = $2;
		  //printf("vardecs\n") ;
		  $$->next = $4;
		}
	|
		{ $$ = NULL; 
		}
	;

morevd	:	vardec SEMI morevd
		{ $$ = create_stm();
		  $$->stm_id = sMOREVD;
		  $$->stm1 = $1;
		  $$->next = $3;
		  //printf("morevd\n") ;
		}
	|
		{ $$ = NULL; 
		}
	;

vardec	:	ID moreid COLON type
		{ $$ = create_stm();
		  //printf("vardec\n") ;
		  $$->stm_id = sVARDEC;
		  $$->exp1 = create_exp();
		  $$->exp1->exp_id = eVARDEC;
		  strcpy($$->exp1->name, $1);
		  $$->exp1->exp1 = $2;
		  $$->exp2 = $4; 
		}
	;

moreid	:	COMMA ID moreid
		{ $$ = create_exp();
		  //printf("moreid\n") ;
		  $$->exp_id = eMOREID;
		  strcpy($$->name, $2);
		  $$->next = $3; 
		}
	|
		{ $$ = NULL; 
		}
	;

type	:	simtype
		{ $$ = $1;
		}
	|	arrtype
		{ $$ = $1;
		}
	;

arrtype	:	ARRAY LSP inrange RSP OF simtype
		{ $$ = create_exp();
		  //printf("!!!!!!!!!!!!!!!!!!!!!!1\n") ;
		  $$->exp_id = eARRTYPE;
		  $$->exp1 = $3;
		  $$->exp2 = $6;
		}
		;

inrange	:	NUM DOTDOT NUM
		{ $$ = create_exp();
		  $$->exp_id = eINRANGE;
		  $$->val = $1;
		  $$->exp1 = create_exp();
		  $$->exp1->exp_id = eNUM;
		  $$->exp1->val = $3;
		}
	;

simtype	:	INT
		{ $$ = create_exp();
		  $$->exp_id = eINT;
		}
	|	BOOL
		{ $$ = create_exp();
		  $$->exp_id = eBOOL;
		}
	;

//function
//SEMI is just for the p grammar, we don't need to care it as we generate the C code
prodecs	:	proc SEMI prodecs
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		//printf("prodec") ;
		$$->stm_id = sPRODECS ;
		$$->stm1 = $1 ;
		$$->stm2 = $3 ;
		}
	|
		{ // ****** Write your own semantic action
		$$ = NULL ;
		}
	;

proc	:	PROC ID SEMI block
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$->stm_id = sPROC ;
		$$ -> exp1 = create_exp() ;
		//$$->exp1->exp_id = eMOREID ; 
		$$ -> exp1 -> exp_id = eID ; 
		strcpy( $$->exp1->name , $2 ) ; 
		$$->stm1 = $4 ;
		}
	;

stmts	:	comstmt
		{ // ****** Write your own semantic action
		$$ = $1 ;
		//$$ = create_stm() ;
		//$$->stm_id = sCOMSTMT ;
		}
	;

comstmt	:	BG stmt morestm	END
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$ -> stm_id = sCOMSTMT ;
		$$ -> stm1 = $2 ;
		$$ -> stm2 = $3 ;
		}
	;

morestm	:	SEMI stmt morestm
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$ -> stm_id = sMORESTM ;
		$$ -> stm1 = $2 ;
		$$ -> stm2 = $3 ;
		}
	|
		{ // ****** Write your own semantic action
		$$ = NULL ;
		}
	;

stmt	:	simstmt
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	|	strstmt
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	;

simstmt :	asstate
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	|	prostate
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	|	restate
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	|	wristate
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	;

asstate :	variable ASSIGN express
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$ -> stm_id = sASSTATE ;
		$$ -> exp1 = $1 ;
		$$ -> exp2 = $3 ;
		}
	;

prostate:	ID
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		//printf("prostate\n") ;
		$$ -> stm_id = sPROSTATE ;
		$$ -> exp1 = create_exp() ; 
		$$ -> exp1 -> exp_id = eID ;
		strcpy( $$ -> exp1 -> name , $1 ) ;
		}
	;

restate	:	READ LP invar moreinvar RP
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$ -> stm_id = sRESTATE ;
		$$ -> exp1 = $3 ;
		$$ -> exp2 = $4 ;
		}
	;

moreinvar :	COMMA invar moreinvar
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eMOREINVAR ;
		$$ -> exp1 = $2 ;
		$$ -> exp2 = $3 ;
		}
	|
		{ // ****** Write your own semantic action
		$$ = NULL ; 
		}
	;

invar	:	variable
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	;

wristate:	WRITE LP outvalue moreoutval RP
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$ -> stm_id = sWRISTATE ; 
		$$ -> exp1 = $3 ; 
		$$ -> exp2 = $4 ;
		//printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA") ; 
		}
	|		WRITE LP STRING RP
		{
		//printf("XxXXXXXXXXXXXXXXXXXXX") ; 
		$$ = create_stm() ;
		$$ -> stm_id = sWRISTATE ; 
		$$ -> exp1 = create_exp() ; 
		$$ -> exp1 -> exp_id = eSTRING ; 
		strcpy( $$ -> exp1 -> name , $3 ) ;
		//printf("!!!!!!!%s", $$ -> exp1 -> name ) ;  
		}
	;

outvalue:	express
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	;

moreoutval:	COMMA outvalue moreoutval
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eMOREOUTVAL ;
		$$ -> exp1 = $2 ;
		$$ -> exp2 = $3 ;
		}
	|
		{ // ****** Write your own semantic action
		$$ = NULL ; 
		}
	;

strstmt :	comstmt
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	|	ifstate
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	|	whilest
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	;

ifstate	:	IF express THEN stmt
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$ -> stm_id = sIFSTATE ;
		$$ -> exp1 = $2 ;
		$$ -> stm1 = $4 ;
		}
	|	IF express THEN stmt ELSE stmt
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$ -> stm_id = sIFSTATE ;
		$$ -> exp1 = $2 ;
		$$ -> stm1 = $4 ;
		$$ -> stm2 = $6 ;
		}
	;

whilest :	WHILE express DO stmt
		{ // ****** Write your own semantic action
		$$ = create_stm() ;
		$$ -> stm_id = sWHILEST ;
		$$ -> exp1 = $2 ;
		$$ -> stm1 = $4 ;
		}
	;

express :	simexpre
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	|	simexpre relatop simexpre
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eEXPRESS ;
		$$ -> exp1 = $1 ; 
		$$ -> exp2 = $2 ; 
		$$ -> next = $3 ; 
		}
	;

simexpre:	sign term addterm
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eSIMEXPRE ;
		//$$ -> exp_id = BUG ;
		$$ -> exp1 = $1 ;
		$$ -> exp2 = $2 ;
		$$ -> next = $3 ;
		}
	;

addterm :	addoper term addterm
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eADDTERM ;
		$$ -> exp1 = $1 ;
		$$ -> exp2 = $2 ;
		$$ -> next = $3 ;
		}
        |
		{ // ****** Write your own semantic action
		$$ = NULL ;
		}
	;

term	:	factor multifac
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eTERM ;
		$$ -> exp1 = $1 ;
		$$ -> exp2 = $2 ;
		}
	;

multifac:	multiop factor multifac
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eMULTIFAC ;
		$$ -> exp1 = $1 ;
		$$ -> exp2 = $2 ;
		$$ -> next = $3 ;
		}
        |
		{ // ****** Write your own semantic action
		$$ = NULL ;
		//printf("mulfac ->>> NULLL " ) ;
		}
	;

factor	:	variable
		{ // ****** Write your own semantic action
		$$ = $1 ;
		//printf("factor ->> variable ") ; 
		}
	|	constant
		{ // ****** Write your own semantic action
		$$ = $1 ;
		//printf("factor ->> constant") ; 
		}
	|	LP express RP
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eLPRP ;
		$$ -> exp1 = $2 ;
		}
	|	NOT factor
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eNOT ;
		$$ -> exp1 = $2 ;
		}
	;

constant:	NUM
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
	    $$ -> exp_id = eNUM ;
		itoa( $1 , $$ -> name , 10 ) ;
		}
	|	CC
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		//printf("CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC") ; 
	    $$ -> exp_id = eCC ;
		strcpy( $$ -> name , $1 ) ;
		}
	| 	TRUE
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eTRUE ;
		}
	| 	FALSE
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eFALSE ;
		}
	
	;

relatop :	EQ
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eEQ ;
		}
	|	NE
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eNE ;
		}
	|	LT
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eLT ;
		}
	|	GT 
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eGT ;
		}
	|	LE
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eLE ;
		}
	|	GE
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eGE ;
		}
	;

sign	:	ADD
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eADD ;
		}
	|	MINUS
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eMINUS ;
		}
	|
		{ // ****** Write your own semantic action
		$$ = NULL ;
		}
	;

addoper :	ADD
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eADD ;
		}
	|	MINUS
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eMINUS ;
		}
	|   OR
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eOR ;
		}
	;

multiop :	TIMES
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eTIMES ;
		}
	|	DIV
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eDIV ;
		}
	|	AND
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eAND ;
		}
	;

variable:	ID
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eID ;
		strcpy( $$ -> name , $1 ) ;
		}
	|	indexvar
		{ // ****** Write your own semantic action
		$$ = $1 ;
		}
	;

indexvar: 	ID LSP express RSP
		{ // ****** Write your own semantic action
		$$ = create_exp() ;
		$$ -> exp_id = eINDEXVAR ;
		strcpy( $$ -> name , $1 ) ; 
		$$ -> exp1 = $3 ; 
		}
	;


%%

// for version compatibility
int yyerror(char *s)
{
	printf("%s\n",s);
        return 1;
}

