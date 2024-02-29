/*5 Escreva dois programas que recebem como parâmetro três
inteiros representando os coeficientes de uma função do segundo grau e execute:
a) O teste para saber se essa função tem raízes reais;
b) O valor das raízes reais.*/

#include <stdio.h>
#include <math.h>

int RaizesReais(int a, int b, int c) {
    int determinante = b*b - 4*a*c;
    return determinante >= 0;
}

void cal_Raizes_Reais(int a, int b, int c) {
    int determinante = b*b - 4*a*c;

    if (determinante >= 0) {
        double raiz1 = (-b + sqrt(determinante)) / (2.0 * a);
        double raiz2 = (-b - sqrt(determinante)) / (2.0 * a);

        printf("Raizes reais: %.2f e %.2f\n", raiz1, raiz2);
    } else {
        printf("A funcao nao tem raizes reais.\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <a> <b> <c>\n", argv[0]);
        return 1;
    }

    int a, b, c;
    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);
    sscanf(argv[3], "%d", &c);

    if (RaizesReais(a, b, c)) {
        printf("A funcao tem raizes reais.\n");

        cal_Raizes_Reais(a, b, c);
    } else {
        printf("A funcao nao tem raizes reais.\n");
    }
    return 0;
}