
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int year, month, days;
    year = n/365;
    n = n%365;
    month = n/30;
    days = n%30;
    
    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days\n", days);

    return 0;
}