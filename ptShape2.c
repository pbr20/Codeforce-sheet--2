#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    for (int i = 1, l = 1; i <= n; i++, l += 2)
    {
        for (int j = i; j <= (n - 1); j++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("*\n");

            continue;
        }
        for (int k = 1; k <= l; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}