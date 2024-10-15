#include <stdio.h>
#include <math.h>

int main()
{

    int n;

    scanf("%d", &n);

    long long int a, t, de = 0, count = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a);

        t = a;

        for (int j = 0;; j++)
        {
            t %= 2;
            a /= 2;

            if (t == 1)
            {
                de = de + pow(2, count);
                count++;
            }

            t = a;

            if (a == 0)
            {
                break;
            }
        }

        printf("%lld\n", de);

        count = 0;
        de = 0;
    }

    return 0;
}
