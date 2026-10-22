

#include<stdio.h>
int main() {
    long long int N;
    scanf("%lld", &N);
    long long int Sum = (N * (N + 1)) / 2;
    printf("%lld", Sum);
    return 0;
}