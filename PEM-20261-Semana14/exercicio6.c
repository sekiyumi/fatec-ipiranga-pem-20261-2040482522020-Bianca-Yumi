/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Sequência de Collatz                                        */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    int n, passos=0;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    // Mensagem caso o número não seja positivo
    if (n <= 0) {
        printf("Numero invalido. O numero deve ser positivo.\n");
        return 1;
    }

    printf("Sequência gerada: %d",n);

    while(n!=1) {
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        printf(" -> %d", n);
        passos++;
    }

    printf("\nNúmero de passos necessários: %d\n",passos);
    return 0;
}
