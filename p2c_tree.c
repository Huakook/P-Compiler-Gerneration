#include <stdio.h>
#include <stdlib.h>
#include "p2c.h"
#include "p2c_tree.h"

// for declaring arrays
int amode = 0;
int aind  = 1;

pEXP* create_exp ( ) {
  pEXP* tmp;
  tmp = (struct p_exp *)malloc(sizeof(struct p_exp));
  if( tmp ) {
    tmp->exp_id = eMIN;
    tmp->name[0] = '\0';
    tmp->val = 0;
    tmp->exp1 = NULL;
    tmp->exp2 = NULL;
    tmp->next = NULL;
  }
  return tmp;
}

pSTM* create_stm ( ) {
  pSTM* tmp;
  tmp = (struct p_stm *)malloc(sizeof(struct p_stm));
  if( tmp ) {
    tmp->stm_id = sMIN;
    tmp->exp1 = NULL;
    tmp->exp2 = NULL;
    tmp->stm1 = NULL;
    tmp->stm2 = NULL;
    tmp->next = NULL;
  }
  return tmp;
}

void free_exp ( pEXP* p ) {
  if( p ) {
    if( p->exp1 ) free_exp( p->exp1 );
    if( p->exp2 ) free_exp( p->exp2 );
    if( p->next ) free_exp( p->next );
    free( p );
  }
}

void free_stm ( pSTM* p ) {
  if( p ) {
    if( p->exp1 ) free_exp( p->exp1 );
    if( p->exp2 ) free_exp( p->exp2 );
    if( p->stm1 ) free_stm( p->stm1 );
    if( p->stm2 ) free_stm( p->stm2 );
    if( p->next ) free_stm( p->next );
    free( p );
  }
}

void print_exp ( pEXP* p ) {
  pEXP* te;
  if( p ) {
    switch( p->exp_id ) {
    case eMOREID:
		fprintf(yyout, ", %s", p->name);
		if (amode) {
		  fprintf(yyout, "[%d]", aind);
		}
		print_exp( p->next );
		break;
    case eARRTYPE:
		amode = 1; 
		print_exp( p->exp1 );//inrange
		print_exp( p->exp2 );//simtype
		break;
    case eINRANGE:
		aind = (p->exp1->val) - (p->val);
		break;
    case eINT:
		fprintf(yyout, "int ");
		break;
    case eBOOL:
		fprintf(yyout, "bool ");
		break;
    case eMOREINVAR:
		// Write your own code generation
		print_exp( p -> exp1 ) ;
		print_exp( p -> exp2 ) ;
		break;
    case eMOREOUTVAL:
		// Write your own code generation
		print_exp( p -> exp1 ) ;
		print_exp( p -> exp2 ) ;
		break;
    case eEXPRESS:
		// Write your own code generation
		//printf("expressssssssssssssss\n") ;
		print_exp( p -> exp1 ) ;
		print_exp( p -> exp2 ) ;
		print_exp( p-> next ) ;
		break;
    case eSIMEXPRE:
		// Write your own code generation
		//printf("SSSSSSSSSSSSSSSIM") ;
		print_exp( p -> exp1 ) ;
		print_exp( p -> exp2 ) ;
		print_exp( p-> next ) ;
		break;
    case eADDTERM:
		// Write your own code generation
		print_exp( p -> exp1 ) ;
		print_exp( p -> exp2 ) ;
		print_exp( p-> next ) ;
		break;
    case eTERM:
		// Write your own code generation
		//printf("EEEEEETERM\n") ;
		print_exp( p -> exp1 ) ;
		print_exp( p -> exp2 ) ;
		break;
    case eMULTIFAC:
		// Write your own code generation
		print_exp( p -> exp1 ) ;
		print_exp( p -> exp2 ) ;
		print_exp( p-> next ) ;
		break;
    case eLPRP:
		// Write your own code generation
		fprintf( yyout , " ( " ) ;
		print_exp( p -> exp1 ) ;
		fprintf( yyout , " ) " ) ;
		break;
    case eNOT:
		// Write your own code generation
		fprintf( yyout , "!" ) ;
		print_exp( p -> exp1 ) ;
		break;
    case eADD:
		// Write your own code generation
		fprintf( yyout , "+ " ) ;
		break;
    case eMINUS:
		// Write your own code generation
		fprintf( yyout , "- " ) ; 
		break;
    case eNOSIGN:
		// Write your own code generation
		break;
    case eOR:
		// Write your own code generation
		fprintf( yyout , "| " ) ; 
		break;
    case eTIMES:
		// Write your own code generation
		fprintf( yyout , "* " ) ; 
		break;
    case eDIV:
		// Write your own code generation
		fprintf( yyout , "/ " ) ; 
		break;
    case eAND:
		// Write your own code generation
		fprintf( yyout , "&& " ) ; 
		break;
    case eINDEXVAR:
		// Write your own code generation
		fprintf( yyout , p -> name ) ;
		fprintf( yyout , "[ " ) ;
		print_exp( p -> exp1 ) ;
		fprintf( yyout , " ]" ) ;
		break;
    case eNUM:
		// Write your own code generation
		//printf("NUMMMMMMMMM") ;
		fprintf( yyout , p -> name ) ; 
		break;
    case eCC:
		// Write your own code generation
		//printf("cCCCC\n") ;
		fprintf( yyout , "\"%s\"" , p -> name ) ;
		break;
    case eTRUE:
		// Write your own code generation
		//printf("TTTTTRRRRRRRRRUUUUUUUUUUUUEEEEEEEEE\n") ;
		fprintf( yyout , "true" ) ;
		break;
    case eFALSE:
		// Write your own code generation
		//printf("FALSEEEEEEEEEEEEEEEEEEEE\n") ;
		fprintf( yyout , "false" ) ;
		break;
    case eEQ:
		// Write your own code generation
		fprintf( yyout , "== " ) ;
		break;
    case eNE:
		// Write your own code generation
		fprintf( yyout , "!= " ) ;
		break;
    case eLT:
		// Write your own code generation
		fprintf( yyout , "< " ) ;
		break;
    case eGT:
		// Write your own code generation
		fprintf( yyout , "> " ) ;
		break;
    case eLE:
		// Write your own code generation
		fprintf( yyout , "<= " ) ;
		break;
    case eGE:
		// Write your own code generation
		fprintf( yyout , ">= " ) ;
		break;
    case eID:
		// Write your own code generation
		//printf("IIIIIIIIIIIIDDDDDDDDD\n") ;
		fprintf(yyout , p -> name ) ;
		fprintf( yyout , " " ) ;
		break;
    case eVARDEC:
		//printf("VARDECCCCCCCCCCCCCc\n") ;
			//print_exp( p -> exp2 ) ;
			if( !amode ) fprintf( yyout , p -> name ) ;
			print_exp( p -> exp1 ) ;
			fprintf( yyout , " " ) ; 
		break;
	case eSTRING:
		//printf("estringggggggggggg\n") ;
		fprintf( yyout , "%s" , p -> name ) ; 
		break ; 
	case BUG:
	    fprintf( yyout , "BUG\n") ;
		break ;
    default: fprintf(stderr, "******* An error in expressions!\n");
			 /*char *_tmp = NULL ;
			 itoa( p -> exp_id , _tmp , 10 ) ;
			 fprintf( stderr , ":") ; 
			 fprintf( stderr , _tmp ) ;
			 fprintf(stderr , ":") ;*/
	     break;
    }
  }
}

void print_stm ( pSTM* p ) {
  pEXP *te;
  pSTM *ts;
  if( p ) {
    switch( p->stm_id ) {
    case sPROG:
		fprintf(yyout, "#include <stdio.h>\n#include<stdbool.h>\n\n");
	        print_stm( p->stm1 );
		print_stm( p->stm2 );
		fprintf(yyout, "int main() {\n");
		print_stm( p->next );//recursion
		fprintf(yyout, "}\n");
	        break;
    case sBLOCK:
		fprintf(yyout, "{\n");
	        print_stm( p->stm1 );
		print_stm( p->stm2 );
		print_stm( p->next );
		fprintf(yyout, "}\n");
		break;
    case sVARDECS:
	        print_stm( p->stm1 );
		print_stm( p->next );
		break;
    case sMOREVD:
		//printf("moreeeeeVD\n") ;
	        print_stm( p->stm1 );
		print_stm( p->next );
		break;
    case sVARDEC:
		//printf("VARDECCCCcCCCCC\n") ;
		print_exp( p -> exp2 );
			if( p -> exp2 -> exp_id == eARRTYPE )
			{
				fprintf( yyout , p -> exp1 -> name ) ;
				print_exp( p -> exp1 ) ;
				fprintf( yyout , "[ %d ] " , aind ) ;
				//type -> eARRTYPE
			}else{
				print_exp( p -> exp1 );//eVARDEC
			}//p -> exp1 -> exp1 is eMOREID
		fprintf(yyout, ";\n");
		amode = 0;
		break;
/*for vardec: ID moreid COLON type
		  $$ = create_stm();
		  printf("vardec\n") ;
		  $$->stm_id = sVARDEC;
		  $$->exp1 = create_exp();
		  $$->exp1->exp_id = eVARDEC;
		  strcpy($$->exp1->name, $1);
		  $$->exp1->exp1 = $2;
		  $$->exp2 = $4; 

arrtype	:	ARRAY LSP inrange RSP OF simtype
		{ $$ = create_exp();
		  printf("!!!!!!!!!!!!!!!!!!!!!!1\n") ;
		  $$->exp_id = eARRTYPE;
		  $$->exp1 = $3;
		  $$->exp2 = $6;
		}
		;
*/

    case sPRODECS:
		// Write your own code generation
		print_stm( p->stm1 ) ;
		print_stm( p->stm2 ) ;
		break;
    case sPROC:
		// Write your own code generation
		fprintf(yyout, "void ") ;
		print_exp( p -> exp1 ) ;
		fprintf( yyout , "()\n") ;
		print_stm( p -> stm1 ) ;
		break;
    case sCOMSTMT:
		// Write your own code generation
		print_stm( p -> stm1 ) ;
		print_stm( p -> stm2 ) ;
		break;
    case sMORESTM:
		// Write your own code generation
		print_stm( p -> stm1 ) ;
		print_stm( p -> stm2 ) ;
		break;
    case sASSTATE:
		// Write your own code generation
		print_exp( p -> exp1 ) ;
		//printf( "::%p::%s\n", p -> exp2 , p -> exp2 ) ;
		fprintf( yyout , "= " ) ;
		print_exp( p -> exp2 ) ; 
		fprintf( yyout , " ;\n") ;
		break;
    case sPROSTATE:
		// Write your own code generation
		print_exp( p -> exp1 ) ;
		fprintf( yyout , "();\n") ;
		//fprintf( yyout , ";\n") ;
		break;
    case sRESTATE:/****************************************************************************************************/
		// Write your own code generation
		//scanf("%d", &( p -> exp1 -> val ) ) ;
		fprintf( yyout , "scanf(\"%%d\", &" ) ;
		print_exp( p -> exp1 ) ;
		fprintf( yyout , ");\n" ) ;
		break;
    case sWRISTATE:/***************************************************************************************************/
		// Write your own code generation
		if( p -> exp1 && p -> exp1 -> exp_id == eSTRING )
		{
			fprintf( yyout , "printf(" ) ;
			print_exp( p -> exp1 ) ;
			fprintf( yyout , ");\n") ;
		}else{
			fprintf( yyout , "printf(\"%%d\", " ) ;
			print_exp( p -> exp1 ) ;
			fprintf( yyout ,");\n") ;
			print_stm( p -> stm1 ) ;
		}
		break;
    case sIFSTATE:
		// Write your own code generation
		fprintf( yyout , "if(" ) ;
		print_exp( p -> exp1 ) ;
		fprintf( yyout , ") \n") ;
		fprintf( yyout , "{ \n") ;
		print_stm( p -> stm1 ) ;
		fprintf( yyout , "}") ;
		if( p -> stm2 ) 
		{
			fprintf( yyout , "else{ \n") ;
			print_stm( p -> stm2 ) ;
			fprintf( yyout , "}") ;
		}
		fprintf( yyout , "\n") ;
		break;
    case sWHILEST:
		// Write your own code generation
		fprintf( yyout , "while(" ) ;
		print_exp( p -> exp1 ) ;
		fprintf( yyout , ") \n") ;
		fprintf( yyout , "{ \n" ) ;
		print_stm( p-> stm1 ) ;
		fprintf( yyout , "} \n") ;
		break;
	case BUG:
	    fprintf( yyout , "BUG\n") ;
		break ;
    default: fprintf(stderr, "******* An error in statements!\n");
			 /*char *_tmp = NULL ;
			 itoa( p -> stm_id , _tmp , 10 ) ;
			 fprintf( stderr , ":") ; 
			 fprintf( stderr , _tmp ) ;
			 fprintf(stderr , ":") ;*/
	     break;
    }
  }
}

