#include <stdio.h>

int main()
{

    int n, count = 0;

    scanf("%d", &n);

    for (int j = 1; j <= (n * 4); j++)
    {
        if (count == 3)
        {
            printf("PUM\n");
            count = 0;
            continue;
        }
        printf("%d ", j);
        count++;
    }

    return 0;
}