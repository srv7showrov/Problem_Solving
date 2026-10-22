

#include<stdio.h>
int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int rb = b;
    if(a%b == 0)
    {
        printf("%d", b);
    }
    else
    {
        b = b/2;
        while(b>0)
        {
            if(a%b == 0 && rb%b == 0)
            {
                printf("%d", b);
                break;
            }
            b--;
        }
    }
    return 0;
}