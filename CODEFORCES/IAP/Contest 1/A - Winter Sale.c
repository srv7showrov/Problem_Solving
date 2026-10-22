

#include<stdio.h>
int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float price = ((float)b*100)/(100-a);
    printf("%.2f", price);
    return 0;
}