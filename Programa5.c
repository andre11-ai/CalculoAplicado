#include <stdio.h>

// Definición de la estructura Jugador
struct Jugador {
    char nombre[50];
    int edad;
    char telefono[15];
    char sexo;
    float altura;
};

// Función para imprimir el sexo y la altura de un jugador
void imprimirSexoAltura(struct Jugador jugador) {
    printf("Sexo del Jugador: %c\n", jugador.sexo);
    printf("Altura del Jugador: %.2f metros\n", jugador.altura);
}

int main() {
    // Declaración de un jugador
    struct Jugador jugador1;

    // Solicitar al usuario que ingrese los datos del jugador
    printf("Ingrese el nombre del jugador: ");
    scanf("%s", jugador1.nombre);

    printf("Ingrese la edad del jugador: ");
    scanf("%d", &jugador1.edad);

    printf("Ingrese el telefono del jugador: ");
    scanf("%s", jugador1.telefono);

    printf("Ingrese el sexo del jugador (M/F): ");
    scanf(" %c", &jugador1.sexo); // Espacio antes de %c para consumir el salto de línea pendiente

    printf("Ingrese la altura del jugador en metros: ");
    scanf("%f", &jugador1.altura);

    // Imprimir información del jugador
    printf("\n\nDatos del Jugador:\n");
    printf("Sexo: %c\n", jugador1.sexo);
    printf("Altura: %.2f metros\n", jugador1.altura);

    // Llamar a la función para imprimir solo el sexo y la altura
    imprimirSexoAltura(jugador1);

    return 0;
}
