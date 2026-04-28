#include <stdio.h>
#include "suma.h" 

int main() {
    int num1, num2, resultado;

    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    resultado = realizarSuma(num1, num2);

    printf("La suma total es: %d\n", resultado);

    return 0;
}