/*Faça um programa em C que defina uma função recursiva que dados os valores 
de x1 e x2 retorne exatamente y = x1x2*/

#include <stdio.h>

// Função recursiva para calcular o produto de dois números
int produto(int x1, int x2) {
    // Caso base: quando x1 é igual a 1, retorna x2
    if (x1 == 1) {
        return x2;
    }
    // Chamada recursiva, decrementando x1 e somando x2
    return x2 + produto(x1 - 1, x2);
}

int main() {
    int x1, x2;

    printf("Digite dois números inteiros x1 e x2: ");
    scanf("%d %d", &x1, &x2);

    // Chama a função produto() e exibe o resultado
    printf("O produto de %d e %d é: %d\n", x1, x2, produto(x1, x2));

    return 0;
}