#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product of series: %lld\n", product);
    return 0;
}
