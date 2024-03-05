/*5 Escreva dois programas que recebem como parâmetro três
inteiros representando os coeficientes de uma função do segundo grau e execute:
a) O teste para saber se essa função tem raízes reais;
b) O valor das raízes reais.*/

#include <stdio.h>
#include <math.h>


void cal_Raizes_Reais(int a, int b, int c){
    int delta = b * b - 4 * a * c;

    if (delta >= 0){

        //formula de x' e x´´, -b + raiz de delta / 2a
        double raiz1 = (-b + sqrt(delta)) / (2.0 * a);
        double raiz2 = (-b - sqrt(delta)) / (2.0 * a);

        printf("Raizes reais: %.2f e %.2f\n", raiz1, raiz2);

    } 
    
    else{

        printf("A funcao nao tem raizes reais\n");

    }
}

int main() {
  int a,b,c;
    printf("Digite os 3 numeros inteiros: ");
    printf("\n");
    scanf("%d %d %d", &a, &b,&c);

    printf("O resultado da função dos valores a = %d, b = %d, c = %d\n",a, b, c);

    cal_Raizes_Reais(a, b, c);
}

/*#include <stdio.h>
#include <math.h>

void calcularRaizes(int a, int b, int c) {
    double discriminante = pow(b, 2) - 4 * a * c;

    if (discriminante >= 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2.0 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2.0 * a);

        printf("Raízes reais: %.2f e %.2f\n", raiz1, raiz2);
    } else {
        printf("A função não possui raízes reais.\n");
    }
}

int main() {
    int a, b, c;

    printf("Digite os coeficientes da função quadrática (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Resultados para a função com a = %d, b = %d, c = %d\n", a, b, c);
    calcularRaizes(a, b, c);

    return 0;
}*/