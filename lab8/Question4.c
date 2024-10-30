#include <stdio.h>

int main() {
    int matrixA[3][3], matrixB[3][3], resultMul[3][3], resultSub[3][3];
    int i=0,j=0,k=0;

    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultMul[i][j] = 0;
            for (k = 0; k < 3; k++) {
                resultMul[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultSub[i][j] = matrixA[i][j] - resultMul[i][j];
        }
    }

    printf("Multiplication Result Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultMul[i][j]);
        }
        printf("\n");
    }

    printf("Subtraction Result Matrix (Matrix A - Multiplication Result):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultSub[i][j]);
        }
        printf("\n");
    }

}
