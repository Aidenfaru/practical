#include <stdio.h>
int swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b); // Call-by-value
    printf("After function call: a = %d, b = %d\n", a, b);
    return 0;
}
