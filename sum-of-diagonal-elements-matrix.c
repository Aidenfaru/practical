#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns (square matrix): ");
    scanf("%d", &rows);
    cols = rows; // Square matrix
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
        if (i != rows - i - 1) {
            sum += matrix[i][rows - i - 1];
        }
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}