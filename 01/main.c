#include <stdio.h>
#include <string.h>
int main()
{
  char keywords[32][8] = {
      "auto", "double", "int", "struct", "break", "else", "long",
      "switch", "case", "enum", "register", "typedef", "char",
      "extern", "return", "union", "const", "float", "short",
      "unsigned", "continue", "for", "signed", "void", "default",
      "goto", "sizeof", "volatile", "do", "if", "static", "while"};
  char input[6];
  int i, flag = 0;

  printf("Enter value : ");
  scanf("%s", input);

  for (i = 0; i < 32; i++)
  {
    if (strcmp(input, keywords[i]) == 0)
    {
      flag = 1;
    }
  }
  if (flag == 1)
  {
    printf("%s is a keyword.", input);
  }
  else
  {
    printf("%s is not a keyword.", input);
  }
}