#include <stdio.h>
#include "operaciones.h"

int main() {
    float n1, n2;
    int opcion;

    printf(" Calculadora Modular (Ing. IA) \n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &n2);

    printf("\nSeleccione una operacion:\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1: printf("Resultado: %.2f\n", sumar(n1, n2)); break;
        case 2: printf("Resultado: %.2f\n", restar(n1, n2)); break;
        case 3: printf("Resultado: %.2f\n", multiplicar(n1, n2)); break;
        case 4: printf("Resultado: %.2f\n", dividir(n1, n2)); break;
        default: printf("Opcion no valida.\n");
    }

    return 0;
}
