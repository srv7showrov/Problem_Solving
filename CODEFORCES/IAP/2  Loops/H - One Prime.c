

#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    if(n == 1)
    {
        printf("No");
    }
    else
    {
        int count=0;
        for(int i=1; i<=n; i++)
        {
            if(n%i == 0)
            {
                count++;
            }
        }
        if(count>2)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    return 0;
}