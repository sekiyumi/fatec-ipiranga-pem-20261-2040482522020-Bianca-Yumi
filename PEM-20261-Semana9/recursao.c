/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo: Desenvolver um sistema que execute cáuculos complexos         */
/*            utilizando função recursiva                                   */
/*                                                        Data: 08/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include "recursao.h"

void decToBin(int n){
    if (n<=1){
        printf("%d",n);
        return;
    }
    decToBin(n/2);
    printf("%d",n%2);
}

int potencia(int base,int exp){
    if (exp==0){
        return 1;
    }
    return base*potencia(base,exp-1);
}

int somaDigitos(int n){
    if (n==0){
        return 0;
    }
    return (n%10)+somaDigitos(n/10);
}
