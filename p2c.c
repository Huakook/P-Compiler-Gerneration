#include <stdio.h>
#include <string.h>
#include "p2c.h"
#include "p2c_tree.h"
#include "p2c_yacc.h"
//#include "p2c_tree.c"

char pas_name[16];
int pas_val;
pSTM* program = NULL;

int main(int argc,char *argv[]) {
    int p, i;
    char fname[20];
	//printf("argc:%d \n", argc ) ; 
	//printf("%s\n", argv[ 0 ] ) ;
    if (argc == 2) {
        yyin = fopen(argv[1],"r");
		//printf("222\n") ;
	if (yyin) { // Source file is opened.
		//printf("yyin\n") ; 
	    p = yyparse();
	    if (p) { //Parsing fails
		printf("pas2c: Parsing failed! ******\n");
	    } else { //Parsing succeeds
		printf("pas2c: Parsing succeeded!\n");
		strcpy( fname, argv[1] );
		for (i=0; (fname[i]!='.') && (fname[i]!='\0'); i++);
		fname[i++] = '.';
		fname[i++] = 'c';
		fname[i++] = '\0';
		yyout = fopen( fname, "w" );
		print_stm( program );
		fclose( yyout );
		printf("pas2c: %s is generated!\n", fname);
	    }
	}
	fclose( yyin );
    } else {
        printf("pas2c syntax: [pas2c source_file_name]\n");
    }
}
