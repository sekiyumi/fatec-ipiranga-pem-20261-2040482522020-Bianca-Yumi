/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Usar um ponteiro para acessar os                            */
/*              dados de um vetor e exibir os valores                       */
/*              antes e depois  de multiplicar por 2 as                     */
/*              expressões calculadas a partir do ponteiro                  */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    // Declara o vetor
    int vetor[5]={2,4,6,8,10};
    // Ponteiro apontando para o primeiro elemento do vetor
    int *p = vetor;

    // Exibe os valores, antes da 
    // multiplicação usando ponteiros
    printf("Vetor antes: ");
    for(int i=0;i<5;i++) {
        printf("%d ",*(p+i));
    }

    // Exibe o resultado depois
    // da multiplicação por 2
    printf("\n\nVetor depois: ");
    for(int i=0;i<5;i++) {
        printf("%d ",*(p+i) * 2);
    }

    return 0;
}
