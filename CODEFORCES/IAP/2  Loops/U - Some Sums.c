

#include<stdio.h>
int main ()
{
    int n, a, b, sum = 0;
    scanf("%d %d %d", &n, &a, &b);
    for(int i=1; i<=n; i++)
    {
        int dsum = 0;
        int x = i;
        while(x>0)
        {
            int digit = x%10;
            dsum = dsum + digit;
            x = x/10;
        }
        if(dsum >= a && dsum <= b)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);

    return 0;
}