

#include<stdio.h>
int main ()
{
    char s;
    int a;
    scanf("%c %d", &s, &a);
    for(int i=1; i<=a; i++)
    {
        int x;
        scanf("%d", &x);
        for(int i=1; i<=x; i++)
        {
            printf("%c", s);
        }
        printf("\n");
    }
    return 0;
}