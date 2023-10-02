%{
#include<stdio.h>
int c = 0;
%}
%%
[/][/].* {c++;}
[/][*]([^*/])*[*][/] {c++;}
%%
void main()
{
	yyin = fopen("a.c", "r");
	yyout = fopen("b.c", "w");
	yylex();
	printf("count = %d\n",c);
}
int yywrap()
{ 
	return 1;
}