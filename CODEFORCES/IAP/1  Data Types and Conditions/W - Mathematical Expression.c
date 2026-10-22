

#include<stdio.h>
int main ()
{
    long long int a, b, c;
    char x, s;
    scanf("%lld %c %lld %c %lld", &a, &s, &b, &x, &c);

    if(s == '+')
    {
        long long int sum = a+b;
        if(sum == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%lld", sum);
        }
    }
    else if(s == '-')
    {
        long long int sub = a-b;
        if(sub == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%lld", sub);
        }
    }
    else if(s == '*')
    {
        long long int mul = a*b;
        if(mul == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%lld", mul);
        }
    }

    return 0;
}