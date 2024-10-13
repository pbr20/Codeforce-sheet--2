#include <stdio.h>

int main()
{

    int N, X;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    X = A[0];

    for (int i = 1; i < N; i++)
    {
        if (X < A[i])
        {
            X = A[i];
        }
    }

    printf("%d", X);

    return 0;
}