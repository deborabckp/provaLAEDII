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
    //  A condição para verificar se o numero está entre 1 e 30
    if( num >= 1 && num <=30){

    for(int j = 0; j < num; j++){
        printf("*");
    }
        printf("\n");
    }else{
        printf("ERRO!,insira um valor entre 1 a 30\n");
    }
    
       }
    printf("\n");
    return 0;
}