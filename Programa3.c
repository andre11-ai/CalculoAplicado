/*

Realice el programa en C de la multiplicación de la matrices que
se muestran a continuación:

a = [
1 2 3
4 5 6
7 8 9

] b = [

1 2 3
4 5 6
7 8 9
]

*/

#include <stdio.h>

void matrixMultiplication(int mat1[][3], int mat2[][3], int result[][3]) {
    int i, j, k;

    // Iterar a través de las filas de la matriz 1
    for (i = 0; i < 3; i++) {
        // Iterar a través de las columnas de la matriz 2
        for (j = 0; j < 3; j++) {
            result[i][j] = 0; // Inicializar el elemento (i, j) del resultado en 0

            // Iterar a través de los elementos de la fila i de la matriz 1
            // y de los elementos de la columna j de la matriz 2
            for (k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j]; // Multiplicar y sumar los productos parciales
            }
        }
    }
}

void printMatrix(int matrix[][3]) {
    int i, j;

    // Iterar a través de las filas de la matriz
    for (i = 0; i < 3; i++) {
        // Iterar a través de las columnas de la matriz
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]); // Imprimir el elemento (i, j) de la matriz
        }
        printf("\n"); // Imprimir una nueva línea después de cada fila
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    matrixMultiplication(mat1, mat2, result); // Llamar a la función para realizar la multiplicación de matrices

    printf("Matrix 1:\n");
    printMatrix(mat1); // Imprimir la matriz 1

    printf("\nMatrix 2:\n");
    printMatrix(mat2); // Imprimir la matriz 2

    printf("\nMultiplication Result:\n");
    printMatrix(result); // Imprimir el resultado de la multiplicación

    return 0;
}
