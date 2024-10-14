#include <stdio.h>
#include <math.h>

int main()
{

    int n;

    scanf("%d", &n);

    long long int a, bi, x, t, de;

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a);

        t = a;
        bi = 0;
        x = 1;

        for (int j = 0;; j++)
        {
            t %= 2;
            a /= 2;

            if (t == 1)
            {
                bi = bi + (t * x);
                x *= 10;
            }

            t = a;

            if (a == 0)
            {
                break;
            }
        }

        de = 0;

        for (int k = 0;; k++)
        {

            if (bi != 0)
            {
                de = de + (pow(2, k) * 1);
            }

            else if (bi == 0)
            {
                break;
            }

            bi /= 10;
        }

        printf("%lld\n", de);
    }

    return 0;
}