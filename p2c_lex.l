%{
#include <stdio.h>
#include <string.h>
#include "p2c.h"
#include "p2c_tree.h"
#include "p2c_yacc.h"
%}

ID  [A-Za-z][A-Za-z0-9]*
NUM [0-9][0-9]*
CC1  '[^']*'
CC2 ''''
/*STRING \"[^\"]*\"*/
/*Example: [^0-9]+ means Except 0-9*/
STRING \"[^\"]*\"

%%

div		{return DIV;}
or		{return OR;}
and		{return AND;}
not		{return NOT;}
if		{return IF;}
then		{return THEN;}
else		{return ELSE;}
of		{return OF;}
while		{return WHILE;}
do		{return DO;}
begin		{return BG;}
end		{return END;}
read		{return READ;}
write		{return WRITE;}
var		{return VAR;}
array		{return ARRAY;}
procedure	{return PROC;}
program		{return PROG;}
integer		{return INT;}
Boolean		{return BOOL;}
true		{return TRUE;}
false		{return FALSE;}
"+"		{return ADD;}
"-"		{return MINUS;}
"*"		{return TIMES;}
"="		{return EQ;}
"<>"		{return NE;}
"<"		{return LT;}
">"		{return GT;}
"<="		{return LE;}
">="		{return GE;}
"("		{return LP;}
")"		{return RP;}
"["		{return LSP;}
"]"		{return RSP;}

":="		{return ASSIGN;}
"."		{return DOT;}
","		{return COMMA;}
":"		{return COLON;}
";"		{return SEMI;}
".."		{return DOTDOT;}
{ID}	{ // ****** Write code to pass ID's semantic value ******/
		  //***yytext pointing the soruce code of the input program***/
		  //***yylval is agreed by Bison and flex if they want to communicate with the global variable***/
		 sscanf(yytext, "%s", pas_name);
		 yylval.sr = strdup( pas_name );
		 return ID;
		}
{NUM}           {sscanf(yytext, "%d", &pas_val);
		 yylval.nu = pas_val;
		 return NUM;}
{CC1}|{CC2}     {sscanf(yytext, "%s", pas_name);
		 yylval.sr = strdup( pas_name );
		 return CC;}
{STRING} {sscanf(yytext, "%[^\t\n]", pas_name);
		 //printf(":%s:", yytext ) ;
		 //printf("!%s!", pas_name ) ; 
		 yylval.sr = strdup( pas_name );
		 return STRING;}
[ \t\n]		{/* skip blanks */}

%%

// For version compatibility
int yywrap() {return 1;}

