
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROG = 258,
     PROC = 259,
     BG = 260,
     END = 261,
     INT = 262,
     BOOL = 263,
     TRUE = 264,
     LP = 265,
     RP = 266,
     LSP = 267,
     RSP = 268,
     FALSE = 269,
     CC = 270,
     STRING = 271,
     DOT = 272,
     SEMI = 273,
     VAR = 274,
     ARRAY = 275,
     OF = 276,
     DOTDOT = 277,
     IF = 278,
     THEN = 279,
     READ = 280,
     WRITE = 281,
     WHILE = 282,
     DO = 283,
     ELSE = 284,
     ASSIGN = 285,
     COMMA = 286,
     COLON = 287,
     ID = 288,
     NUM = 289,
     AND = 290,
     OR = 291,
     NOT = 292,
     GE = 293,
     LE = 294,
     GT = 295,
     LT = 296,
     NE = 297,
     EQ = 298,
     MINUS = 299,
     ADD = 300,
     TIMES = 301,
     DIV = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 22 "p2c_yacc.y"
 pSTM* sm; //statement
        pEXP* ex; //expression
        int   nu; //number
		char* sr; //string
      


/* Line 1676 of yacc.c  */
#line 107 "p2c_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


