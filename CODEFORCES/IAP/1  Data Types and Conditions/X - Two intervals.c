

#include<stdio.h>
int main ()
{
    long long int a, b, c, d, start, end;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    if(a>c)
    {
        start = a;
    }
    else
    {
        start = c;
    }

    if(b<d)
    {
        end = b;
    }
    else
    {
        end = d;
    }

    if(start<=end)
    {
        printf("%lld %lld", start, end);
    }
    else
    {
        printf("-1");
    }
    return 0;
}