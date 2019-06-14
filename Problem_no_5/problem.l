%{
   // M A Mazedul Islam
   // 30-05-2019
   // Compiler Problem no 5 usinf lex
%}
%option noyywrap
%%
[a-hA-Ho-zO-Z][a-zA-Z0-9]* printf("Float variable : %s\n",yytext);
0.[0-9][0-9] |
[1-9][0-9]*.[0-9][0-9] printf("Float Number : %s\n",yytext);
0.[0-9][0-9][0-9]+ |
[1-9][0-9]*.[0-9][0-9][0-9]+ printf("Double Number : %s\n",yytext);
[a-zA-Z0-9]* printf("Invalid input or Undefined");
%%
int main(){
   yylex();
return 0;
}
