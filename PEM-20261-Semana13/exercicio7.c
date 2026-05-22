/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   percorrer um vetor de números inteiros,                     */
/*              exibe os endereços de memória dos números,                  */
/*              calcula a soma total, a média dos valores e                 */
/*              de identifica o menor e o maior número do vetor.            */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    // Declara os valores do vetor
    int vetor[8] = {4,8,12,16,2,24,28,32},i,soma=0;
    // Declara os ponteiros
    int *p=vetor,maior= *p,menor= *p,v_atual= *p;

    for(i = 0; i < 8; i++) {
        // Exibe o valore endereço de cada elemento do vetor
        printf("Elemento [%d]:\n",i);
        printf("Valor: %d\n",v_atual);
        printf("Endereco: %p\n\n",(void*)p);

        //Soma de todos os números de 
        soma+=v_atual;

        // Procura o maior valor do vetor
        if(v_atual>maior){
            maior = v_atual;
        }
        // Procura o menor valor do vetor
        if(v_atual<menor){
            menor=v_atual;
        }
        // Avança para o proximo inteiro
        p++;
    }
    // Faz o calculo da média
    float media=soma/8;
    // Exibe a soma, média, maior valor e menor valor
    printf("Soma: %d\n",soma);
    printf("Media: %.2f\n",media);
    printf("Maior valor: %d\n",maior);
    printf("Menor valor: %d\n",menor);

    return 0;
}
