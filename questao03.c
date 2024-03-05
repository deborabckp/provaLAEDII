    #include <stdio.h>

    /*3. Um triângulo retângulo pode ter lados inteiros. O conjunto de três valores inteiros para os lados de um triângulo 
    retângulo é chamado de triplo pitagórico. Esses três lados devem satisfazer a relação de que a soma dos quadrados 
    de dois dos lados é igual ao quadrado da hipotenusa. Encontre todos os triplos pitagóricos para cateto1, cateto2 
    e a hipotenusa, todos com até o valor de n, indicado como parâmetro*/

    void triplps(int n){
        printf("Triplos pitagoricos para catetos e hipotenusa menores ou iguais a %d:\n", n);
        printf("Cateto1\t\tCateto2\t\tHipotenusa\n");

        int cateto1, cateto2, hipotenusa;

        for (cateto1 = 1; cateto1 <= n; cateto1++){
          
            for (cateto2 = cateto1; cateto2 <= n; cateto2++){
              
                for (hipotenusa = cateto2; hipotenusa <= n; hipotenusa++){
                   
                    //verifica se os valores formam triplo pitagórico
                    if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa){
                        printf("%d\t\t%d\t\t%d\n", cateto1, cateto2, hipotenusa);
                    }
                }
            }
        }
    }

    int main(){

        //Determina até qual valor os catetos e a hipotenusa devem ser gerados
        int limite;

        printf("Digite o valor limite para os catetos e a hipotenusa: ");
        scanf("%d", &limite);

        triplps(limite);

        return 0;
    }