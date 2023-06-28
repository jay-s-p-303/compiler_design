// simple file reading program 'test.c' and print content with stdio.h only

#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("test.c", "r");
    if (fp == NULL)
    {
        printf("File not found");
        return;
    }
    else
    {
        // read the file and print its content
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(fp);
        }
    }
}