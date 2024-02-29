#include <stdio.h>

/*1. Uma aplicação interessante de computadores é desenhar gráficos e gráficos de barras. Escreva um
programa que leia cinco números (cada um entre 1 e 30). Para cada número lido, seu programa
deve imprimir uma linha contendo aquele número de asteriscos adjacentes. Por exemplo, se seu
programa lê o número sete, ele deve imprimir *******.*/

int main(){
    int i, num;

    printf("Digite 5 numeros de 1 a 30:");
    for( i = 0; i < 5; i++){
        printf("\n");
        scanf("%i", &num);

    for(int j = 0; j < num; j++){
        printf("*");
    }
        printf("\n");
    }
    printf("\n");
    return 0;
}