/*

Almacene e imprima en un vector n elementos de tipo entero
(máximo 10 elementos) y muestre los siguientes valores:
a) El Máximo valor de los elementos.
b) El mínimo valor de los elementos.
c) La suma de los elementos.
d) El producto de los elementos.

*/


#include <stdio.h>

// Función para obtener el máximo valor en un arreglo
int Maximo_valor(int array[], int length) {
    int maximo = array[0];

    for (int i = 1; i < length; i++) {
        if (array[i] > maximo) {
            maximo = array[i];
        }
    }

    return maximo;
}

// Función para obtener el mínimo valor en un arreglo
int Minimo_valor(int array[], int length) {
    int minimo = array[0];

    for (int i = 1; i < length; i++) {
        if (array[i] < minimo) {
            minimo = array[i];
        }
    }

    return minimo;
}

// Función para obtener la suma de elementos en un arreglo
int Suma_elementos(int array[], int length) {
    int suma = 0;

    for (int i = 0; i < length; i++) {
        suma += array[i];
    }

    return suma;
}

// Función para obtener el producto de elementos en un arreglo
int Producto_elementos(int array[], int length) {
    int producto = 1;

    for (int i = 0; i < length; i++) {
        producto *= array[i];
    }

    return producto;
}

// Función para generar una lista de tamaño n
void generar_lista(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int main() {
    int n;
    printf("¿Cuantos numeros quieres que haya en la lista? ");
    scanf("%d", &n);

    int lista[n];

    generar_lista(lista, n);

    printf("Lista generada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    printf("Maximo valor: %d\n", Maximo_valor(lista, n));
    printf("Minimo valor: %d\n", Minimo_valor(lista, n));
    printf("Suma de elementos: %d\n", Suma_elementos(lista, n));
    printf("Producto de elementos: %d\n", Producto_elementos(lista, n));

    return 0;
}
