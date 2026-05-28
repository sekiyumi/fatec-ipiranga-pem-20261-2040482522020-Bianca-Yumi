/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Busca recursiva e soma por divisão do vetor                 */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int chamadas_busca = 0;
int chamadas_soma = 0;
int prof_atual_soma = 0, prof_max_soma = 0;
int prof_atual_busca = 0, prof_max_busca = 0;
int buscaRec(int *v, int n, int chave);
int somaRec(int *v, int ini, int fim);

int main() {
    int vetor[12],chave,result_busca,resultado_soma,i;

    srand((unsigned int)time(NULL));

    printf("Vetor de 12 inteiros aleatórios gerado:\n");
    for (i=0;i<12;i++) {
        vetor[i] = rand() % 100;
        printf("[%d]: %d  ",i,vetor[i]);
    }
    printf("\n\n");

    resultado_soma = somaRec(vetor, 0, 11);
    printf("Soma Total do Vetor: %d\n", resultado_soma);
    printf("Métricas da Soma -> Chamadas: %d | Profundidade Máxima: %d\n\n",chamadas_soma,prof_max_soma);

    printf("Digite um valor para buscar no vetor: ");
    scanf("%d", &chave);

    result_busca = buscaRec(vetor, 12, chave);
    if (result_busca != -1) {
        printf("Valor encontrado na primeira ocorrência: índice [%d]\n",result_busca);
    } else {
        printf("Mensagem: O valor informado não existe no vetor.\n");
    }
    printf("Métricas da Busca -> Chamadas: %d | Profundidade Máxima: %d\n",chamadas_busca,prof_max_busca);

    return 0;
}

int buscaRec(int *v, int n, int chave){
    chamadas_busca++;
    prof_atual_busca++;
    if (prof_atual_busca > prof_max_busca) prof_max_busca = prof_atual_busca;

    if (n <= 0) {
        prof_atual_busca--;
        return -1;
    }

    if (v[0] == chave) {
        prof_atual_busca--;
        return 0; 
    }

    int res = buscaRec(v + 1, n - 1, chave);
    prof_atual_busca--;

    if (res == -1){
        return -1;
    }
    return res + 1;
}
int somaRec(int *v, int ini, int fim){
    chamadas_soma++;
    prof_atual_soma++;
    if (prof_atual_soma > prof_max_soma) prof_max_soma = prof_atual_soma;

    if (ini == fim) {
        prof_atual_soma--;
        return v[ini];
    }

    int meio = (ini + fim) / 2;

    int soma_esquerda = somaRec(v, ini, meio); // Metade Esquerda [cite: 176]
    int soma_direita = somaRec(v, meio + 1, fim); // Metade Direita [cite: 176]

    prof_atual_soma--;
    return soma_esquerda + soma_direita;
}
