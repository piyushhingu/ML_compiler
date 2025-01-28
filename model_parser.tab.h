/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MODEL_PARSER_TAB_H_INCLUDED
# define YY_YY_MODEL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CLASS = 258,                   /* CLASS  */
    NN_MODULE = 259,               /* NN_MODULE  */
    DEF = 260,                     /* DEF  */
    SUPER = 261,                   /* SUPER  */
    INIT = 262,                    /* INIT  */
    SELF = 263,                    /* SELF  */
    FORWARD = 264,                 /* FORWARD  */
    EQUALS = 265,                  /* EQUALS  */
    LPAREN = 266,                  /* LPAREN  */
    RPAREN = 267,                  /* RPAREN  */
    COLON = 268,                   /* COLON  */
    COMMA = 269,                   /* COMMA  */
    DOT = 270,                     /* DOT  */
    RESHAPE = 271,                 /* RESHAPE  */
    SEQUENTIAL = 272,              /* SEQUENTIAL  */
    CONV2D = 273,                  /* CONV2D  */
    BATCHNORM2D = 274,             /* BATCHNORM2D  */
    RELU = 275,                    /* RELU  */
    MAXPOOL2D = 276,               /* MAXPOOL2D  */
    LINEAR = 277,                  /* LINEAR  */
    MULTIPLY = 278,                /* MULTIPLY  */
    RETURN = 279,                  /* RETURN  */
    INTEGER = 280,                 /* INTEGER  */
    FLOAT = 281,                   /* FLOAT  */
    STRING = 282,                  /* STRING  */
    IDENTIFIER = 283,              /* IDENTIFIER  */
    F_MAXPOOL2D = 284,             /* F_MAXPOOL2D  */
    F_RELU = 285,                  /* F_RELU  */
    F_VIEW = 286,                  /* F_VIEW  */
    SOFTMAX = 287                  /* SOFTMAX  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "model_parser.y"

    char* sval;  // for string tokens (e.g., IDENTIFIER, STRING)
    int ival;    // for INTEGER tokens
    float fval;  // for FLOAT tokens
    struct ASTNode* node;  // for AST nodes

#line 103 "model_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MODEL_PARSER_TAB_H_INCLUDED  */
