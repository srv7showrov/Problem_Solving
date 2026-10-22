

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int start = 0, end = 0;
        if (n > m)
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
        for (int i = start+1; i <= end-1; i++)
        {
            if (i%2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}