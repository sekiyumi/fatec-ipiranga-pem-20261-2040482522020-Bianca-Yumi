/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Jogo da memória                                             */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

void exibir(int m[4][4]) {
    int i,j;
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m[4][4]={
        {1, 2, 3, 4},
        {2, 5, 6, 7},
        {3, 6, 5, 8},
        {4, 7, 8, 1}
    };
    int i,j,simetria=1,dPrin=0,dSec=0;

    // Exibe tabuleiro
    exibir(m);
    // Verifica simetria
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            if (m[i][j]!=m[j][i]) {
                simetria=0;
            }
        }
    }
    // Soma as diagonais
    for (i=0;i<4;i++) {
        dPrin+=m[i][i];
        dSec+=m[i][3-i];
    }
    // Resultados
    if (simetria)
        printf("\nSimetrica\n");
    else
        printf("\nNao simetrica\n");

    printf("Diagonal principal: %d\n", dPrin);
    printf("Diagonal secundaria: %d\n", dSec);

    return 0;
}
