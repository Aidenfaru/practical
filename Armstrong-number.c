#include <stdio.h>
#include <math.h>

int main() {
    int number, temp, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    temp = number;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
