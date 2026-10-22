

#include<stdio.h>
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

        for(int i=0; i<n; i++)
        {
            int max = a[i];

            for(int j=i; j<n; j++)
            {
                if(a[j] > max)
                {
                    max = a[j];
                }
                printf("%d ", max);
            }
        }
        printf("\n");
    }
    return 0;
}
