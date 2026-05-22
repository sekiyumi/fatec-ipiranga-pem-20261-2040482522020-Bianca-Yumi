/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   percorrer todos os elementos de                             */
/*              uma matriz 4x4, identificar o maior                         */
/*              valor e exibir sua posição em linha                         */
/*              e coluna utilizando ponteiro.                               */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    // Declara a matriz 4x4
    int matriz[4][4] =
    {1,2,3,4,
    5,6,7,8,
    9,10,11,12,
    13,14,15,16};

    // Inicia o maior valor com o primeiro elemento da matriz
    int maiorValor=matriz[0][0];
    // Variáveis para armazenar a linha e a coluna do maior valor
    int linha=0,coluna=0,i;
    // Ponteiro para um vetor de 4 inteiros
    int (*p)[4]=matriz;

    // Percorre todos os elementos da matriz
    for(i=0; i<16; i++){
        // Verifica se o elemento atual é maior
        if(maiorValor < *(p[0] + i)){
            // Atualiza o maior valor
            maiorValor= *(p[0] + i);

            // Calcula a linha do elemento
            linha=i/4;
            // Calcula a coluna do elemento
            coluna=i%4;
        }
    }

    // Exibe o maior valor e sua posição na matriz
    printf("\n\nMaior valor: %d(%d,%d)",maiorValor, linha+1, coluna+1);

    return 0;
}
