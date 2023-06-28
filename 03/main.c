#include <stdio.h>
#include <string.h>

void main()
{
    char keywords[32][8] = {
        "auto", "double", "int", "struct", "break", "else", "long",
        "switch", "case", "enum", "register", "typedef", "char",
        "extern", "return", "union", "const", "float", "short",
        "unsigned", "continue", "for", "signed", "void", "default",
        "goto", "sizeof", "volatile", "do", "if", "static", "while"};
    char str[20];
    int i, flag = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    // if((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z') || str[0]=='_')
    if ((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122) || str[0] == 95)
    {
        flag = 1;
        for(i = 0; i < 32; i++)
        {
            if(strcmp(str, keywords[i]) == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("%s is valid identifier.", str);
    }
    else
    {
        printf("%s is not a valid identifier.", str);
    }
}