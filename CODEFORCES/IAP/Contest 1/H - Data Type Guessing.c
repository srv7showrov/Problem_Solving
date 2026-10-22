

#include<stdio.h>
#include<math.h>
int main ()
{
    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);
    double d = (((double)n*k)/a);
    if(d != (long long int)d)
    {
        printf("double");
    }
    else if(d>2147483647 || d<-2147483648)
    {
        printf("long long");
    }
    else
    {
        printf("int");
    }
    return 0;
}