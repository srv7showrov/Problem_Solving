

#include<stdio.h>
int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<b && a<c)
    {
        printf("%d ", a);
        {
            if(b>c)
            {
                printf("%d", b);
            }
            else
            {
                printf("%d", c);
            }
        }
    }
    else if(b<a && b<c)
    {
        printf("%d ", b);
        if(a>c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else if(c<a && c<b)
    {
        printf("%d ", c);
        if(a>b)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", b);
        }
    }

    else if(a==b)
    {
        if(a<c)
        {
            printf("%d %d", a, c);
        }
        else
        {
            printf("%d %d", c, a);
        }
    }

    else if(b==c)
    {
        if(b<a)
        {
            printf("%d %d", b, a);
        }
        else
        {
            printf("%d %d", a, b);
        }
    }

    else if(a==c)
    {
        if(a<b)
        {
            printf("%d %d", a, b);
        }
        else
        {
            printf("%d %d", b, a);
        }
    }

    return 0;
}