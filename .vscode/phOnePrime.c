#include <stdio.h>

int main()
{

    int A;
    int count = 0;

    scanf("%d", &A);

    for (int i = 1; i <= A; i++)
    {
        if (A % i == 0)
        {

            count++;

            if (count == 3)
            {
                break;
            }
        }
    }

    if (count == 2)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}