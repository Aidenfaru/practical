#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m, n;
    printf("Enter two non-negative integers m and n: ");
    scanf("%d %d", &m, &n);

    if (m < 0 || n < 0) {
        printf("Ackermann function is only defined for non-negative integers.\n");
    } else {
        printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));
    }
    return 0;
}
