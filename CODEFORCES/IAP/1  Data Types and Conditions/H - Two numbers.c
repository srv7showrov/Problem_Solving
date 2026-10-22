
#include<stdio.h>
int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float div = (float)a/b;
    int diva = a/b;
    if(div-diva == 0)
    {
        printf("floor %d / %d = %d\n", a, b, diva);
        printf("ceil %d / %d = %d\n", a, b, diva);
        printf("round %d / %d = %d\n", a, b, diva);
    }
    else if(div-diva < 0.5)
    {
        printf("floor %d / %d = %d\n", a, b, diva);
        printf("ceil %d / %d = %d\n", a, b, diva+1);
        printf("round %d / %d = %d\n", a, b, diva);
    }
    else
    {
        printf("floor %d / %d = %d\n", a, b, diva);
        printf("ceil %d / %d = %d\n", a, b, diva+1);
        printf("round %d / %d = %d\n", a, b, diva+1);  
    }
    return 0;
}