

#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        int x;
        long long int fact = 1;
        scanf("%d", &x);
        for(int i=1; i<=x; i++)
        {
            fact = fact * i;
        }
        printf("%lld\n", fact);
    }
    return 0;
}