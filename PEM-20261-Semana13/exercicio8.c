/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   utilizar ponteiros para acessar posições                    */
/*              específicas do vetor e calcula a diferença                  */
/*              entre  os valores apontados                                 */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    // Declara os valores do vetor
    double vetor[10] = {2,4,6,8,10,12,14,16,18,20};
    // Declara os ponteiros apontando inicialmente para o começo do vetor
    double *pTerceiro=vetor,*pOitavo=vetor;

    // Move os ponteiros para as posições desejadas
    pTerceiro += 2;
    pOitavo += 7;

    // Exibe a diferença entre os valores apontados
    printf("Diferenca entre terceiro e oitavo valor: %.2lf",*pOitavo - *pTerceiro);

    // Exibe o intervalo entre os dois ponteiros
    printf("\n\nIntervalo entre os dois ponteiros: ");
    int i;
    // Percorre os elementos entre o terceiro e o oitavo
    for(i = 2; i<8; i++){

        // Exibe o valor atual apontado
        printf("\n%.2lf", *pTerceiro);

        // Avança o ponteiro para o próximo elemento
        pTerceiro++;
    }

    return 0;
}
