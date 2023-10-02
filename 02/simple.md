### 2. Demonstrate a C program to identify whether a given line is a comment or not.

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[100];
    int i = 0, flag = 0;

    printf("Enter the input: ");
    gets(input);

    if (input[0] == '/')
    {
        if (input[1] == '/')
            flag = 1;
        else if (input[1] == '*')
        {
            for (i = 2; i < strlen(input); i++)
            {
                if (input[i] == '*' && input[i + 1] == '/')
                {
                    flag = 2;
                    break;
                }
            }
        }
    }

    if (flag == 1)
        printf("Single line comment");
    else if (flag == 2)
        printf("Multiline comment");
    else
        printf("Not a comment");
    return 0;
}
```

<br>

##### *Output* :-

```
Enter the input: // ok 
Single line comment
```

```
Enter the input: /* ok */
Multiline comment
```

```
Enter the input: ok
Not a comment
```