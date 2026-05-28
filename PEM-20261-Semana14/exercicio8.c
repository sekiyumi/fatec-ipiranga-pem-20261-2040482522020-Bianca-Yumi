/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Análise e manipulação de vetores                            */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

#define N 8

int main() {
    int original[N],inverso[N],maior,indiceMaior=0,menor,indiceMenor=0,pares=0,impares=0,chave,encontrado=-1,i;

    for (i=0;i<N;i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &original[i]);
    }

    // Inicia a busca
    maior = original[0];
    menor = original[0];

    // Processa dos dados
    for (i=0;i<N;i++) {
        // Define o maior valor
        if (original[i]>maior) {
            maior=original[i];
            indiceMaior=i;
        }
        // Define o menor valor
        if (original[i]<menor) {
            menor=original[i];
            indiceMenor=i;
        }
        // Conta quantos números pares e quantos números ímpares há no vetor
        if (original[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        // Vetor na ordem inversa
        inverso[N-1-i]=original[i];
    }

    // Impressão dos vetores e dados coletados
    printf("\nVetor Original: ");
    for (i = 0; i < N; i++){
        printf("%d ", original[i]);
    }
    printf("\nVetor Inverso: ");
    for (i = 0; i < N; i++){
        printf("%d ", inverso[i]);
    }

    printf("\n\nMaior valor: %d no índice [%d]",maior,indiceMaior);
    printf("\nMenor valor: %d no índice [%d]",menor,indiceMenor);
    printf("\nNumeros pares: %d",pares);
    printf("Numeros impares: %d",impares);

    // Busca linear [cite: 92]
    printf("\nDigite um valor para buscar no vetor: ");
    scanf("%d",&chave);

    for (i=0;i<N;i++) {
        if (original[i]==chave) {
            encontrado=i;
            break;
        }
    }

    if (encontrado!=-1){
        printf("O valor %d foi encontrado no índice [%d].\n",chave,encontrado);
    }
    else{
        printf("O valor %d não existe no vetor.\n", chave);
    }
    return 0;
}
