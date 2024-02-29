/*4 Escreva um programa que imprima uma tabela de todos os
equivalentes de algarismos romanos dos números decimais no intervalo de 1
a 100. */

#include <stdio.h>

void converterRomano(int num) {
    int decimais[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* Romanos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("%3d: ", num);

    for (int i = 0; i < 9; i++) {
        while (num >= decimais[i]) {
            printf("%s", Romanos[i]);
            num -= decimais[i];
        }
    }
    printf("\n");
}
int main() {
    printf("Tabela de algarismos romanos para numeros decimais de 1 a 100:\n");

    for (int i = 1; i <= 100; i++) {
        converterRomano(i);
    }
    return 0;
}