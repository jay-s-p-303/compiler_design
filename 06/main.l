%{
#include<stdio.h>
int v = 0, c = 0;
%}
%%
[aeiouAEIOU] {v++;}
[b-df-hj-np-tv-zB-DF-HJ-NP-Z] {c++;}
%%
void main()
{
	printf("Press Enter value : ");
	yylex();
	printf("v = %d\nc = %d\n",v,c);
}
int yywrap()
{ 
	return 1;
}