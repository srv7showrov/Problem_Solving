

#include<stdio.h>
int main ()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int dif = (a*b) - (c*d);
    printf("Difference = %lld", dif);

    return 0;
}