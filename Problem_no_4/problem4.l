%{
/*
 * We expand upon the first example by adding recognition of some other
 * parts of speech.
 */

%}
%option noyywrap
%%
[i-nI-N][a-zA-Z0-9]* printf("Integer variable : %s\n",yytext);
[1-9] |
[1-9][0-9] | 
[1-9][0-9][0-9] | 
[1-9][0-9][0-9][0-9] printf("ShortInt number : %s\n",yytext);
[1-9][0-9][0-9][0-9][0-9]+ printf("LongInt number : %s\n",yytext);
[a-zA-Z0-9]* printf("Invalid input or Undefined\n");
%%

int main()
{
     yylex();
     return 0;
}

/* M A Mazedul Islam */
