#include <stdio.h>

int main() {
    int matrixA[3][3];
    int matrixB[3][3];
    int result[3][3];
    int subtractedResult[3][3];
    int i = 0, j = 0, k = 0;

    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 3; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("Resultant Matrix (A * B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            subtractedResult[i][j] = matrixA[i][j] - result[i][j];
        }
    }

    printf("\nMatrix A - Resultant Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", subtractedResult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
