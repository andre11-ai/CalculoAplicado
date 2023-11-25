/*

Encuentre el elemento mayor y el elemento menor de una
matriz bidimensional de tamaño (3 x 3).

*/

#define ALTURA 3
#define ANCHURA 3

#include <stdio.h> // Para printf

int main() {
    int matriz[ALTURA][ANCHURA] = {
            {20,  50, 80},
            {5, 12, 44},
            {56,  1,  3},
    };
    // Iniciar los números, suponiendo que son los primeros
    int menor = matriz[0][0];
    int mayor = matriz[0][0];
    // Recorrer la matriz y comparar
    for (int y = 0; y < ALTURA; y++) {
        for (int x = 0; x < ANCHURA; x++) {
            int elementoActual = matriz[y][x];
            if (elementoActual > mayor) mayor = elementoActual;
            if (elementoActual < menor) menor = elementoActual;
        }
    }
    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);
    return 0;
}
