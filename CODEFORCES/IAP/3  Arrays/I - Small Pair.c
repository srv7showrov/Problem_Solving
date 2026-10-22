

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        int min = a[0] + a[1] + 1;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int sum = a[i] + a[j] + j - i;
                {
                    if(sum<min)
                    {
                        min = sum;
                    }
                }
            }
        }
        printf("%d\n", min);
    }
    return 0;
}
