// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal of the matrix:\n");

    // Upper half (including main diagonal)
    for (int col = 0; col < n; col++) {
        i = 0;
        j = col;
        while (j >= 0 && i < n) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Lower half (below main diagonal)
    for (int row = 1; row < n; row++) {
        i = row;
        j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
