#include <stdio.h>

int main()
{

    int N[1000];
    int M;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    scanf("%d", &M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < M; i++)
    {
        if (N[i] % 2 == 0)
        {
            even++;
        }

        if (N[i] % 2 != 0)
        {
            odd++;
        }

        if (N[i] > 0)
        {
            positive++;
        }

        if (N[i] < 0)
        {
            negative++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}