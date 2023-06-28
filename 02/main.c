//  program to validate single line or multiline comments in a C program

#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp;
    char ch;
    int flag = 0;
    char str[100];
    int i = 0;
    fp = fopen("test.c", "r");
    if (fp == NULL)
    {
        printf("File not found");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '/')
        {
            ch = fgetc(fp);
            if (ch == '/')
            {
                flag = 1;
                while ((ch = fgetc(fp)) != '\n')
                {
                    str[i++] = ch;
                }
                str[i] = '\0';
                printf("Single line comment: ```\033[0;32m%s\033[0m```\n", str);
                i = 0;
            }
            else if (ch == '*')
            {
                flag = 1;
                while ((ch = fgetc(fp)) != EOF)
                {
                    if (ch == '*')
                    {
                        ch = fgetc(fp);
                        if (ch == '/')
                        {
                            break;
                        }
                    }
                    str[i++] = ch;
                }
                str[i] = '\0';
                printf("Multi line comment: ```\033[0;32m%s\033[0m```\n", str);
                i = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("No comments found\n");
    }
    fclose(fp);
}