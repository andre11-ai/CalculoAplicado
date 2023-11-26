#include <stdio.h>
#include <stdlib.h>

//  Funciones 
float celsius_Fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheit_Celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float celsius_Kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_Celsius(float kelvin) {
    return kelvin - 273.15;
}

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {

    int opcion;
    float temperatura;

    do {
        // Menú principal
        printf("\n\nConversion de Temperatura\n\n");
        printf("1. Celsius a Fahrenheit\n");
        printf("2. Fahrenheit a Celsius\n");
        printf("3. Celsius a Kelvin\n");
        printf("4. Kelvin a Celsius\n");
        printf("5. Salir\n");

        // Seleccionar la operación a realizar
        printf("Selecciona una opcion (1-5):");
        scanf("%d", &opcion);

        // Validar la opción
        if (opcion >= 1 && opcion <= 4) {
            // Obtener la temperatura
            printf("\nTemperatura: ");
            scanf("%f", &temperatura);

            // Realizar la conversión según la opción seleccionada
            switch (opcion) {
                case 1:
                    printf("Resultado: %.2f Fahrenheit\n", celsius_Fahrenheit(temperatura)); break;
                case 2:
                    printf("Resultado: %.2f Celsius\n", fahrenheit_Celsius(temperatura)); break;
                case 3:
                    printf("Resultado: %.2f Kelvin\n", celsius_Kelvin(temperatura)); break;
                case 4:
                    printf("Resultado: %.2f Celsius\n", kelvin_Celsius(temperatura)); break;
            }
        } else if (opcion != 5) {
            // Mensaje de error para opciones no válidas
            printf("Opción no válida. Inténtalo de nuevo.\n");
        }

    } while (opcion != 5);

    // Limpiar pantalla
    limpiarPantalla();

    // Mensaje de salida
    printf("Saliendo del programa...\n");

    return 0;
}
