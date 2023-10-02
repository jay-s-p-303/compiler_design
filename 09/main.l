%{
#include<stdio.h>
int c = 0;
%}
%%
[<][^>]*[>] {printf("%s", yytext);c++;}
.|\n {;}
%%
void main()
{
	yyin = fopen("test.html", "r");
	yylex();
	printf("\nTotal tags = %d\n",c);
}
int yywrap()
{ 
	return 1;
}