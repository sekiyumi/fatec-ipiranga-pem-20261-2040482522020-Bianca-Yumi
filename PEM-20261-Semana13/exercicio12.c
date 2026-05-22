/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Ordenar um vetor utilizando ponteiros e                     */
/*              trocar os valores entre as posições do vetor                */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
// Função responsável por trocar os valores
// de duas posições do vetor
void trocar(int *a, int *b){
    // Declara variável auxiliar para armazenar temporariamente um valor
    int c;
    // Ponteiro apontando para a variável auxiliar
    int *pC = &c;
    // Armazena o valor de b em c
    *pC=*b;
    // Copia o valor de a para b
    *b = *a;
    // Copia o valor armazenado em c para a
    *a = *pC;
}
// Função responsável por ordenar o vetor
// utilizando o método Selection Sort
void selectionSort(int *vetor, int n){
    int i,j;
    // Percorre o vetor
    for(i=0;i<n;i++){
        // Compara cada elemento com os demais
        for(j=0;j<n;j++){
            // Verifica se o elemento atual é menor
            if(*(vetor+i)< *(vetor+j)){
                // Troca os valores das posições
                trocar((vetor+i),(vetor+j));
                // Exibe o vetor após cada troca
                for(i=0;i<8;i++){
                    printf("%2d",*(vetor+i));
                }
                printf("\n");
            }
        }
    }
};

int main(){
    // Declara os valores do vetor
    int vetor[8]={34, 7, 89, 12, 56, 3, 71, 25},i;
    // Exibe o vetor antes da ordenação
    for(i=0; i<8; i++){
        printf("%2d ",vetor[i]);
    }
    printf("\n");

    // Chama a função de ordenação
    selectionSort(vetor,8);

    return 0;
}
