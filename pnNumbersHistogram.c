#include <stdio.h>

int main()
{

    char A;
    int N;
    int B[50];
    for (int i = 0; i < N; i++)
    {

        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= B[i]; j++)
        {
            printf("%c", A);
        }
    }

    return 0;
}