#include <stdio.h>

int main() {
    printf("Using continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skips the current iteration when i is 5
        }
        printf("%d ", i);
    }

    printf("\nUsing break:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exits the loop when i is 5
        }
        printf("%d ", i);
    }

    return 0;
}
