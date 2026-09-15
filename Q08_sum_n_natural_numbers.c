#include <stdio.h>
int main(void) {
    int n;
    long long sum;
    scanf("%d", &n);
    sum = (long long)n * (n + 1) / 2;
    printf("Sum = %lld\n", sum);
    return 0;
}
