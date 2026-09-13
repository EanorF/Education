#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int transpon (int a, int b, int matrix[a][b]) {
    int matrix_B[b][a];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matrix_B[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matrix[i][j] = matrix_B[j][i]; 
        }
    }
}

void main() {
    srand(time(NULL));
    int min = 1;
    int max = 9;
    int a,b;
    scanf("%d %d", &a,&b);
    int matrix_A[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matrix_A[i][j]=rand() % (max - min + 1) + min;;
        }
    }
    printf("\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", matrix_A[i][j]);
        }
        printf("\n");
    }
    transpon(a, b, matrix_A);
    printf("\nТранспонированная матрица:\n\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", matrix_A[i][j]);
        }
        printf("\n");
    }
}