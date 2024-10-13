#include <stdio.h>

int main()
{

    int n, a, b, sum = 0, sum1 = 0, t, x;

    scanf("%d%d%d", &n, &a, &b);

    for (int i = 1; i <= n; i++)
    {
        t = i;
        x = i;
        t %= 10;
        for (int j = 0;; j++)
        {
            if (x != 0)
            {
                x /= 10;
                sum = sum + t;
                t = x;
                t %= 10;
            }

            else if (x == 0)
            {
                break;
            }
        }

        if (sum >= a && sum <= b)
        {
            sum1 = sum1 + i;
        }

        sum = 0;
    }

    printf("%d\n", sum1);

    return 0;
}