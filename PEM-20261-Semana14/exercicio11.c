/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Aritmética de ponteiros sobre um vetor                      */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    int vetor[6]={10, 20, 30, 40, 50, 60},*p=vetor,soma=0,i;

    printf("Endereço inicial de p: %p\n\n",(void*)p);

    // Imprime os elementos e endereço de memória
    for (i=0;i<6;i++){
        printf("Vetor[%d] = %2d\n",i, *(p+i));
        printf("Endereco: %p\n\n",(void*)(p+i));
    }

    // Soma dos elementos
    for (i=0;i<6;i++){
        soma+=*(p+i);
    }
    printf("\nSoma dos elementos=%d\n",soma);

    // Dobra o valor de cada elemento
    for (i=0;i<6;i++){
        *(p+i) = *(p+i) * 2;
    }

    printf("\nVetor modificado (valores dobrados):\n");
    for (i=0;i<6;i++){
        printf("Vetor[%d] = %d\n", i, *(p+i));
    }

    // Validação da diferença entre os endereços [cite: 127]
    printf("\nO tamanho de um int nesta arquitetura é de %lu bytes.\n", sizeof(int));
    printf("A diferença dos endereços é de 4 em 4 bytes.\n");

    return 0;
}
