#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found\n");
    }
    return 0;
}