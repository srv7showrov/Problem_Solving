

#include <stdio.h>
int main()
{
    int n, m;
    while (1)
    {
        scanf("%d %d", &n, &m);
        if (n <= 0 || m <= 0)
        {
            return 0;
        }

        else
        {
            int start=0, end=0;
            if(n>m)
            {
                start = m;
                end = n;
            }
            else
            {
                start = n;
                end = m;
            }
            int sum = 0;
            for(int i=start; i<=end; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("sum =%d\n", sum);
        }
    }
    return 0;
}