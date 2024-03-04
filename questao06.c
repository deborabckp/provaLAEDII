/*Escreva um programa em C que tenha uma função recursiva 
para calcular o Máximo Divisor de dois números inteiros.*/

#include <stdio.h>

// Função recursiva para calcular o MDC
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    // Chama a função mdc() e exibe o resultado
    printf("O MDC de %d e %d e: %d\n", num1, num2, mdc(num1, num2));

    return 0;
}