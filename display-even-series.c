#include <stdio.h>

int main() {
    int n, term = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= 2;
    }

    return 0;
}
