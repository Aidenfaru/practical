#include <stdio.h>
int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    int size = 5;
    printf("Contents of the character array: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}