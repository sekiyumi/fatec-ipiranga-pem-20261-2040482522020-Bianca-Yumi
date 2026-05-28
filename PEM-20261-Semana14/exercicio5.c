/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Tabuada interativa com controle de fluxo                    */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    int i,j;
    char opcao;

    do {
        // Laço para as tabuadas do 1 ao 10
        for (i=1;i<=10;i++) {
            printf("Tabuada do %d:\n",i);
            
            j = 1;
            while (j<=10) {
                printf("%2d x %2d = %2d\t",i,j,i*j);
                j++;
            }
            printf("\n\n");
        }
        // Pergunta ao usuario se deseja continuar as outras tabuadas
        printf("Quer continuar? 'S' para sim e 'N' para nao: ");
        scanf(" %c",&opcao);
    } while (opcao!='N' && opcao!='n');

    return 0;
}
