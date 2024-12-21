#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot, power;

    printf("Enter a number: ");
    scanf("%lf", &number);

    squareRoot = sqrt(number);
    power = pow(number, 2);

    printf("Square root of %.2f is %.2f\n", number, squareRoot);
    printf("Square of %.2f is %.2f\n", number, power);

    return 0;
}
