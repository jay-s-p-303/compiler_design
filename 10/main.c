#include <stdio.h>
#include <string.h>

void main()
{
    char A[30] = "", P1[30] = "", P2[30] = "", S1[30] = "", S2[30] = "";
    int i, j, c = 0;

    printf("Enter A[P1] -> ");
    scanf("%s", P1);
    printf("Enter A[P2] -> ");
    scanf("%s", P2);

    for (i = 0; i < strlen(P1); i++)
    {
        for (j = 0; j < strlen(P2); j++)
        {
            if (P1[i] == P2[j])
            {
                A[c] = P2[j];
                c++;
            }
        }
    }
    
    for (i = c; i < strlen(P1); i++)
        S1[i - c] = P1[i];
    
    for (i = c; i < strlen(P2); i++)
        S2[i - c] = P2[i];
    
    printf("A -> %s\n", A);
    printf("C -> %s/%s\n", S1, S2);
}