

#include<stdio.h>
int main ()
{
    int a, fd, sd;
    scanf("%d", &a);
    fd = a%10;
    sd = a/10;

    if(fd%sd == 0 || sd%fd == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}