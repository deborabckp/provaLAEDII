#include <stdio.h>

/*2. Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127.
O programa deve imprimir 10 caracteres por linha.
*/

int main() {
    int caracter = 10;
    int i;
    printf("TABELA ASCII\n");
    
    for (i = 0; i <= 127; i++) {
        printf("%c (%d)\t", (char)i, i);

        if((i + 1) % caracter == 0) {
            printf("\n");
        }
    }

    return 0;
}