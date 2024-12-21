#include <stdio.h>
//This code is for to compare two numbers
int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d.\n", num1, num2);
    } else {
        printf("Both numbers are equal.\n");
    }
    return 0;
}
