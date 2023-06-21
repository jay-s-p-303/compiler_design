#include <stdio.h>

void main()
{
    char c[2];
    printf("Enter a character: ");
    scanf("%s", c);
    switch (c[0])
    {
    case '+':
        printf("Addition");
        break;
    case '-':
        printf("Subtraction");
        break;
    case '*':
        printf("Multiplication");
        break;
    case '/':
        printf("Division");
        break;
    case '%':
        printf("Modulus");
        break;
    case '>':
        if (c[1] == '=')
            printf("Greater than or equal");
        else
            printf("Greater than");
        break;
    case '<':
        if (c[1] == '=')
            printf("Less than or equal");
        else
            printf("Less than");
        break;
    case '=':
        if (c[1] == '=')
            printf("Equal");
        else
            printf("Assignment");
        break;
    default:
        printf("Invalid operator");
    }
    printf("\n\n");
}
