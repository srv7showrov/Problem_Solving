#include <stdio.h>
int main()
{
    long long int a, b, c, d, mul, mod;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int result = 1;
    
    result = (result * (a % 100)) % 100;
    result = (result * (b % 100)) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;

    printf("%02lld\n", result);
    return 0;
}