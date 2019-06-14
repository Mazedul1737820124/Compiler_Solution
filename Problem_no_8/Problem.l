%{
  // Solved by M A Mazedul Islam
%}
%option noyywrap
%%
[1-9][0-9]*"."[0-9]* printf("Output : Float\n");
[1-9][0-9]* printf("Output : Integer\n");
[a-zA-z]* printf("Output : Identifier\n");
%%
int main(){
   yylex();
return 0;
}


