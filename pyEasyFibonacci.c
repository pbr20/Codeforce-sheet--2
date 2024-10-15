#include <stdio.h>

int main()
{

    int n;

    int f1 = 0, f2 = 1, f3;

    scanf("%d", &n);

    if (n >= 1)
    {
        printf("%d", f1);
    }

    if (n >= 2)
    {
        printf(" %d", f2);
    }

    if (n >= 3)
    {
        for (int i = 3; i <= n; i++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            printf(" %d", f3);
        }
    }

    return 0;
}