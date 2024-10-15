#include <stdio.h>

int main()
{

    int n, count = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= count; k++)
        {
            printf("*");
        }

        count += 2;

        printf("\n");
    }

    count = ((2 * n) - 1);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= count; k++)
        {
            printf("*");
        }

        printf("\n");

        count -= 2;
    }

    return 0;
}