/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki                                                        */
/*  Objetivo: Refatoraçâo com ponteiros                                     */
/*                                                         Data: 24/04/2026 */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LIMITE_ALERTA 300.0
#define MAX_SUBPASTAS 10

typedef struct Pasta {
    char nome[50];
    float tamanho_proprio;
    float tamanho_total;
    struct Pasta* subpastas[MAX_SUBPASTAS];
    int qtd_sub;
} Pasta;

Pasta* criarPasta(const char* nome, float tamanho) {
    Pasta* nova = (Pasta*) malloc(sizeof(Pasta));

    if (!nova) {
        printf("Erro de alocação de memória!\n");
        exit(1);
    }

    strncpy(nova->nome, nome, sizeof(nova->nome) - 1);
    nova->nome[sizeof(nova->nome) - 1] = '\0';

    nova->tamanho_proprio = tamanho;
    nova->tamanho_total = 0;
    nova->qtd_sub = 0;

    for (int i = 0; i < MAX_SUBPASTAS; i++) {
        nova->subpastas[i] = NULL;
    }

    return nova;
}

void adicionarSubpasta(Pasta* pai, Pasta* filho) {
    if (!pai || !filho) return;

    if (pai->qtd_sub >= MAX_SUBPASTAS) {
        printf("Limite de subpastas atingido em %s\n", pai->nome);
        return;
    }

    pai->subpastas[pai->qtd_sub++] = filho;
}

float processarHierarquia(Pasta* atual, int nivel_atual, int limite_profundidade) {
    if (!atual || nivel_atual > limite_profundidade) {
        return 0;
    }

    atual->tamanho_total = atual->tamanho_proprio;

    for (int i = 0; i < atual->qtd_sub; i++) {
        atual->tamanho_total += processarHierarquia(
            atual->subpastas[i],
            nivel_atual + 1,
            limite_profundidade
        );
    }

    for (int i = 0; i < nivel_atual; i++) printf("  ");

    printf("|-- %s [%.2f GB]", atual->nome, atual->tamanho_total);

    if (atual->tamanho_total > LIMITE_ALERTA) {
        printf(" [!] ALERTA: GARGALO DETECTADO");
    }

    printf("\n");

    return atual->tamanho_total;
}

void liberarMemoria(Pasta* atual) {
    if (!atual) return;

    for (int i = 0; i < atual->qtd_sub; i++) {
        liberarMemoria(atual->subpastas[i]);
    }

    free(atual);
}

int main() {
    Pasta* raiz = criarPasta("RAIZ", 10.0);
    Pasta* projetos = criarPasta("Projetos_TI", 50.0);
    Pasta* backups = criarPasta("Backups_Antigos", 350.0);
    Pasta* videos = criarPasta("Videos_Aulas", 280.0);

    adicionarSubpasta(raiz, projetos);
    adicionarSubpasta(raiz, backups);
    adicionarSubpasta(projetos, videos);

    int limite;
    clock_t t;

    printf("Defina o limite de profundidade do mergulho: ");

    if (scanf("%d", &limite) != 1 || limite < 0) {
        printf("Entrada inválida!\n");
        liberarMemoria(raiz);
        return 1;
    }

    printf("\n--- RELATORIO DE HIERARQUIA COM PONTEIROS ---\n");

    t = clock();

    processarHierarquia(raiz, 0, limite);

    t = clock() - t;

    printf("--------------------------------------------\n");

    double tempo_execucao = ((double)t) / CLOCKS_PER_SEC;

    printf("Tempo de execucao: %f segundos\n", tempo_execucao);
    printf("Ciclos por segundo: %ld\n", (long)t);

    liberarMemoria(raiz);

    return 0;
}
