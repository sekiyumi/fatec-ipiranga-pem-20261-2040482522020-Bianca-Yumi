/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Matriz multidimencional                                     */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    int A[3][3],B[3][3],C[3][3],i,j,k;

    // Lê da matriz A
    printf("Digite os elementos da matriz A (3x3):\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++) {
            scanf("%d",&A[i][j]);
        }
    }

    // Lê da matriz B
    printf("Digite os elementos da matriz B (3x3):\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            scanf("%d",&B[i][j]);
        }
    }

    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            C[i][j]=0;
            for (k=0;k<3;k++) {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    // Exibição tas 3 matrizes
    printf("\nMatriz A:\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++){
            printf("%4d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B:\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++){
            printf("%4d ",B[i][j]);
        }
            printf("\n");
    }
    printf("\nMatriz C:\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++){
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
