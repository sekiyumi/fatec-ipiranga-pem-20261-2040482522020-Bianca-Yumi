/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Estatistica de um conjunto de dados                         */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    int i;
    float vetor[10],somaTotal=0,media=0,maior,menor,somaAcimaMedia=0;

    for (i=0;i<10;i++) {
        printf("Digite o valor do elemento [%d]: ",i);
        scanf("%f",&vetor[i]);
        somaTotal+=vetor[i];
    }

    // Calcula a média
    media=somaTotal/10.0f;

    // Define o meior e menor número do vetor como o primeiro elemento
    maior=vetor[0];
    menor=vetor[0];

    // "Calcula" o maior e menor valor no vetor
    for (i=0;i<10;i++) {
        if (vetor[i] > maior){
            maior=vetor[i];
        }
        if (vetor[i]<menor){
            menor=vetor[i];
        }
        if (vetor[i] > media){
            somaAcimaMedia += vetor[i];
        }
    }

    // Exibe as informações
    printf("\n\nMedia Aritmetica: %.2f\n",media);
    printf("Maior Valor: %.2f\n",maior);
    printf("Menor Valor: %.2f\n",menor);
    printf("Soma dos Valores Acima da Media: %.2f\n", somaAcimaMedia);

    return 0;
}
