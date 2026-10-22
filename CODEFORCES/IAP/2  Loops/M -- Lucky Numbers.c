

#include<stdio.h>
int main ()
{
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++)
    {
        int sv = i;
        int lucky = 1;
        while(sv>0)
        {
            int digit = sv%10;
            if(digit != 4 && digit != 7)
            {
                lucky = 0;
                break;
            }
            sv = sv/10;
        }

        if(lucky == 1)
        {
            printf("%d ", i);
            count++;
        }
    }

    if(count == 0)
    {
        printf("-1");
    }
    return 0;
}