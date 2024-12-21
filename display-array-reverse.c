#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("Contents of the array in reverse order: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
