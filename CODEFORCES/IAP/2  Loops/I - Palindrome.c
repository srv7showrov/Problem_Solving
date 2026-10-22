

#include<stdio.h>
int main ()
{
    int n, nval = 0;
    scanf("%d", &n);
    int original = n;
    while(n > 0)
    {
        int dig = n%10;
        nval = nval*10 + dig;
        n = n/10;
    }
    if(original == nval)
    {
        printf("%d\nYES", nval);
    }
    else
    {
        printf("%d\nNO", nval);
    }
    return 0;
}