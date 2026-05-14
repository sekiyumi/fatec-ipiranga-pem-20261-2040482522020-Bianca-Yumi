/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo: Desenvolver um sistema que execute cáuculos complexos         */
/*            utilizando função recursiva                                   */
/*                                                        Data: 08/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include "recursao.h"
#include "interface.h"

int main(){
    int opcao,numero,base,exp;

    do{
        exibirMenu();
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                numero=lerDado("Digite um numero decimal: ");
                printf("Resultado em binario: ");
                decToBin(numero);
                printf("\n");
                break;
            case 2:
                base=lerDado("Digite a base: ");
                exp=lerDado("Digite o expoente: ");
                printf("Resultado: %d\n",potencia(base,exp));
                break;
            case 3:
                numero=lerDado("Digite um numero: ");
                printf("Soma dos digitos: %d\n",somaDigitos(numero));
                break;
            case 0:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao!=0);

    return 0;
}
