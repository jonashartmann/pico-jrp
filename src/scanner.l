 #include "tokens.h"
 #include "symbol_table.h"
 symbol_t symbol_table;
 entry_t entry;

%%

 /* types */
int    { return(INT);    }
double { return(DOUBLE); }
float  { return(FLOAT);  }
char   { return(CHAR);   }

 /* operators */
"*"      { return('*');  }
"+"      { return('+');  }
"-"      { return('-');  }
"/"      { return('/');  }

","      { return(',');  }
";"      { return(';');  }
":"      { return(':');  }

"'"      { return( QUOTE );  }
"\""     { return( DQUOTE ); }

"("      { return('(');  }
")"      { return(')');  }
"{"      { return('{');  }
"}"      { return('}');  }
"["      { return('[');  }
"]"      { return(']');  }

"<"      { return('<');  }
">"      { return('>');  }
"="      { return('=');  }

"<="     { return( LE ); }
">="     { return( GE ); }
"=="     { return( EQ ); }
"!="     { return( NE ); }

"&&"     { return( AND ); }
"||"     { return( OR );  }
"!"      { return( NOT ); }

 /* keywords */
if       { return( IF );    }
then     { return( THEN );  }
else     { return( ELSE );  }
while    { return( WHILE ); }
end      { return( END );   }
true     { return( TRUE );  }
false    { return( FALSE ); }


 /* INT_LIT */
[0-9]+  { return( INT_LIT ); }

 /* BRANCO */
[ ' ' | '\t' | '\n' ]+  printf("BRANCO\n");

 /* IDF */
[a-zA-Z]([a-zA-z]|[0-9]|[_])*  { 
                                 strcpy(entry.name, yytext);
                                 entry.type = IDF;
                                 insert(&symbol_table, &entry);
                                 return( IDF );
                                }

 /* F_LIT */
([0-9])*\.([0-9])+(['e'|'E']['+'|'-'][0-9]+)?  { return( F_LIT ); }

 /* ERRO! */
. {  printf("Erro lexical - caractere nao reconhecido: %c.\n", yytext[0]); exit(-1); }


%%

int yywrap(void) 
{
    return 1;
}



int main(void) 
{
    int token;
    init_table(&symbol_table);

    while (token=yylex()) { 
     /* neste laco, obtem-se "palavra por palavra" os tokens reconhecidos
      * pelo scanner fornecido pelo Lex. Poderia ser feita a analise
      * sintatica... Sera feito depois!
      */
        if(token >= 100) printf("Token = %d\n", token);
        else printf("Token = %c\n", token);
        
    }

    free_table(&symbol_table);
    return 0;
}
