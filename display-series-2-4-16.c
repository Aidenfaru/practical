#include <stdio.h>

int main() {
    int n, term = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= term; // Multiply term by itself to get the next term
    }

    return 0;
}
