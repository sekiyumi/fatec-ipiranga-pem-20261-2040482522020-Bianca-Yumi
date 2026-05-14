/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo: Desenvolver um sistema que execute cáuculos complexos         */
/*            utilizando função recursiva                                   */
/*                                                        Data: 08/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include "interface.h"

void exibirMenu(){
    printf("\n===== CUCC =====\n");
    printf("1 - Converter decimal para binario\n");
    printf("2 - Calcular potencia\n");
    printf("3 - Somar digitos\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

int lerDado(char mensagem[]){
    int valor;
    printf("%s",mensagem);
    scanf("%d",&valor);

    return valor;
}
