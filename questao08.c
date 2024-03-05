/*Escreva um programa em C que tenha uma função que recebe como entrada um valor inteiro e retorna outro inteiro com os valores revertidos. Por exemplo:
f(1234) = 4321*/

#include <stdio.h>

// Função para inverter um número inteiro
int reverse(int num) {
    int reversed = 0;
    
    //inverter o número ate num ser diferente de 0
    while (num != 0) {
        reversed = reversed * 10 + num % 10;

        //passa para o proximo numero
        num /= 10;
    }
    
    return reversed;
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Chama a função reverse() e exibe o resultado
    printf("O número invertido é: %d\n", reverse(num));

    return 0;
}