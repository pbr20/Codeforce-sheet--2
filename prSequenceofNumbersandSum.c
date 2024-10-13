#include <stdio.h>

int main()
{

    int n, m, sum = 0;
    int t;

    for (int i = 0;; i++)
    {
        scanf("%d%d", &m, &n);

        if (m <= 0 || n <= 0)
        {
            break;
        }

        if (m > n)
        {
            t = m;
            m = n;
            n = t;
        }

        for (int i = m; i <= n; i++)
        {
            printf("%d ", i);
            sum = sum + i;
        }

        printf("sum =%d\n", sum);
        sum = 0;
    }

    return 0;
}