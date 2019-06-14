%{
  // M A Mazedul Islam
  // Complier Problem no 6 using lex
  // 30-05-2019
%}
%option noyywrap
%%
ch_[a-zA-Z0-9][a-zA-Z0-9]* printf("Character Variable : %s\n",yytext);
bn_[a-zA-Z0-9][a-zA-Z0-9]* printf("Binary Variable : %s\n",yytext);
0[0|1][0|1]* printf("Binary Number : %s\n",yytext);
[a-zA-Z0-9]* printf("Invalid input or Undefined");
%%
int main(){
   yylex();
   return 0;
}