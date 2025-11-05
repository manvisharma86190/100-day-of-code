// Multiply two matrices.

#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int a[m][n], b[p][q], product[m][q];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize product matrix with 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
