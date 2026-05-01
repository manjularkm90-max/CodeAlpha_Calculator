#include <stdio.h>

#define MAX 10
void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int sum[MAX][MAX];
    printf("\nMatrix Addition:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX], int r1, int c1, int c2) {
    int mul[MAX][MAX];
    printf("\nMatrix Multiplication:\n");

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}
void transposeMatrix(int a[MAX][MAX], int r, int c) {
    printf("\nTranspose of Matrix:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Call functions
    addMatrix(a, b, r, c);
    multiplyMatrix(a, b, r, c, c);
    transposeMatrix(a, r, c);

    return 0;
}
