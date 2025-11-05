// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, i, j, k, flag = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < n; i++) {
        for (k = i + 1; k < n; k++) {
            if (matrix[i][i] == matrix[k][k]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");

    return 0;
}