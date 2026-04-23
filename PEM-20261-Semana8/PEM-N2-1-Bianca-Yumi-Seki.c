/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Vespertino                                      */
/*  Bianca Yumi Seki                                                        */
/*  Objetivo: Sistema de transporte com uso de ponteiros para processar     */
/*            pesos de cargas, calcular média, identificar excesso e        */
/*            aplicar correção automática nos valores.                      */
/*                                                        Data: 23/04/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

#define tam 10

void exibirVetor(float *ptr_vetor,int n);
void processarCarga(float *ptr_vetor,int n);

int main() {
    float pesos[tam];
    int i;

    // Entrada dos pesos
    printf("Digite os pesos dos %d pacotes:\n", tam);

    for (i=0;i<tam;i++) {
        printf("Peso %d: ",i+1);
        scanf("%f",&pesos[i]);
    }

    printf("\nVetor Antes do Processamento\n");
    exibirVetor(pesos,tam);

    // Processamento dos dados
    processarCarga(pesos,tam);

    printf("\nVetor Depois do Processamento\n");
    exibirVetor(pesos,tam);

    return 0;
}

void exibirVetor(float *ptr_vetor,int n) {
    int i;

    for (i=0;i<n;i++) {
        printf("Pacote %d: %.2f\n",i+1,*(ptr_vetor+i));
    }
}

// Função principal de processamento
void processarCarga(float *ptr_vetor,int n) {
    float soma=0,media,limite;
    int i;

    // Calcular soma dos pesos
    for (i=0;i<n;i++) {
        soma += *(ptr_vetor+i);
    }

    // Calcula média
    media=soma/n;

    // Calcula o limite, onde limite=10% acima da média
    limite=media*1.10;

    printf("\nMedia dos pesos: %.2f\n",media);
    printf("Limite de excesso (+10%): %.2f\n",limite);

    // Verifica pesos acima do limite e corrige
    for (i=0;i<n;i++) {
        if (*(ptr_vetor+i)>limite) {
            printf("Pacote %d excedeu o limite. Aplicando correcao de -5%.\n",i+1);

            // Reduz 5% do peso
            *(ptr_vetor+i)=*(ptr_vetor + i)*0.95;
        }
    }
}
