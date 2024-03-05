/*Escreva um programa em C que tenha uma função recursiva 
para calcular a função isPrime(n) que retorna 1 caso n for primo e 0 caso n não for primo.*/

#include <stdio.h>

// Função recursiva para verificar se um número é primo
int isPrime(int n, int i) {
    // Caso base
    if (i == 1) {
        return 1; // O número é primo
    }
    // Verifica se o número é divisível por i
    if (n % i == 0) {
        return 0; // O número não é primo
    }
    // Chama recursivamente a função com um divisor menor
    return isPrime(n, i - 1);
}

int main() {
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    // Verifica se o número é primo
    if (num < 2) {
        printf("%d não é um número primo.\n", num);
    } 
    
    else {
        if (isPrime(num, num / 2) == 1) {
            printf("%d é um número primo.\n", num);
        } else {
            printf("%d não é um número primo.\n", num);
        }
    }

    return 0;
}   