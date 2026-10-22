

#include<stdio.h>
int main ()
{
    int n, a;
    scanf("%d %d", &n, &a);

    int sum = 0, digit = 0;
    for(int i=0; i<n; i++)
    {
        digit = a%10;
        sum = sum + digit;
        a = a/10;
    }

    printf("%d", sum);

    return 0;
}