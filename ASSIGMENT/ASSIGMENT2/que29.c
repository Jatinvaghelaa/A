#include <stdio.h>
#define ROW 3
#define COL 3

void matrix_addition(int a[][COL], int b[][COL], int c[][COL]) {
    for(int i=0; i<ROW; i++) {
        for(int j=0; j<COL; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void matrix_subtraction(int a[][COL], int b[][COL], int c[][COL]) {
    for(int i=0; i<ROW; i++) {
        for(int j=0; j<COL; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void matrix_multiplication(int a[][COL], int b[][COL], int c[][COL]) {
    for(int i=0; i<ROW; i++) {
        for(int j=0; j<COL; j++) {
            c[i][j] = 0;
            for(int k=0; k<COL; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void display(int matrix[][COL]) {
    for(int i=0; i<ROW; i++) {
        for(int j=0; j<COL; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[ROW][COL] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[ROW][COL];
    
    printf("Matrix A:\n");
    display(a);
    printf("Matrix B:\n");
    display(b);
    
    // Addition
    matrix_addition(a, b, c);
    printf("Addition:\n");
    display(c);
    
    // Subtraction
    matrix_subtraction(a, b, c);
    printf("Subtraction:\n");
    display(c);
    
    // Multiplication
    matrix_multiplication(a, b, c);
    printf("Multiplication:\n");
    display(c);
    
    return 0;
}
