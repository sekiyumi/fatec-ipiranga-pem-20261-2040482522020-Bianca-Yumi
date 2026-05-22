/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   percorrer um vetor em ordem inversa,                        */
/*              mostrar os elementos do vetor na ordem original             */
/*              e utilizar uma função com aritmética de ponteiros           */
/*              para exibir os valores em ordem inversa                     */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

// Função para exibir o vetor invertido
void inverter(int *vetor, int n){
    int i;
    // Move o ponteiro uma posição para trás,
    // apontando para o último elemento válido do vetor
    *(vetor--);

    // Percorre o vetor do fim para o começo
    for(i=0; i<n; n--){

        // Exibe o valor atual apontado
        printf("%d", *vetor--);
    }

};

int main(){
    // Declara os valores do vetor
    int vetor[7]={1,2,3,4,5,6,7},i;

    // Calcula o tamanho do vetor
    int tamanhoArray=sizeof(vetor)/4;

    // Ponteiro para o primeiro elemento do vetor e para o último elemento
    int *pVetorInicio = vetor,*pVetorFinal = vetor+tamanhoArray;

    printf("Vetor original: ");
    for(i=0;i<tamanhoArray;i++){
        // Mostra os elementos em ordem normal
        printf("%d", *(pVetorInicio+i));
    }

    // Exibe o vetor invertido
    printf("\n\nVetor invertido: ");
    inverter(pVetorFinal, tamanhoArray);

    return 0;
}
