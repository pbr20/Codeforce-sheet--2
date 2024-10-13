#include <stdio.h>

int main()
{

    int n, sum = 0;
    int x, y, t;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);

        if (x > y)
        {
            t = x;
            x = y;
            y = t;
        }

        for (int i = (x + 1); i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}