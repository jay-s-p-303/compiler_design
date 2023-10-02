%{
#include<stdio.h>
int c = 0;
%}
%%
[0-9]* {printf("%s\n",yytext);c++;}
.|\n {;}
%%
void main()
{
	yyin = fopen("numbers.txt", "r");
	yylex();
}
int yywrap()
{ 
	return 1;
}