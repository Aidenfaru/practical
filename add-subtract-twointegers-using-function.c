#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", add(a, b));
    printf("Difference (a - b): %d\n", subtract(a, b));
    printf("Difference (b - a): %d\n", subtract(b, a));

    return 0;
}
