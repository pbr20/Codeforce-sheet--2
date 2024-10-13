#include <stdio.h>

int main()
{

    int n;
    int x, t;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        t = x;
        printf("%d", (t % 10));
        x /= 10;
        t = x;

        for (int i = 0;; i++)
        {
            if (t != 0)
            {
                printf(" %d", (t % 10));
                x /= 10;
                t = x;
            }

            else if (t == 0)
            {
                printf("\n");
                break;
            }
        }
    }

    return 0;
}