#include <stdio.h>

int main()
{

    int N;
    int temp, r;
    int M = 0;

    scanf("%d", &N);

    temp = N;

    while (temp != 0)
    {
        r = temp % 10;
        M = (M * 10) + r;
        temp = temp / 10;
    }

    printf("%d\n", M);

    if (N == M)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }
    return 0;
}