/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki                                                        */
/*  Objetivo: Código iterativo                                              */
/*                                                         Data: 24/04/2026 */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_PASTAS 50
#define LIMITE_ALERTA 300.0

typedef struct {
    char nome[50];
    float tamanho_proprio;
    float tamanho_total;
    int subpastas_indices[10];
    int qtd_sub;
} Pasta;

// Banco de dados simulado (Vetor que substitui o uso de ponteiros)
Pasta drive[MAX_PASTAS];

// Função para calcular o tamanho acumulado e mapear (Recursiva)
float processarHierarquia(int index, int nivel_atual, int limite_profundidade) {
    if (index == -1 || nivel_atual > limite_profundidade) {
        return 0;
    }

    // Inicializa o tamanho total com o tamanho da própria pasta
    drive[index].tamanho_total = drive[index].tamanho_proprio;

    // Mergulho recursivo para somar tamanhos dos filhos
    for (int i = 0; i < drive[index].qtd_sub; i++) {
        int filho_idx = drive[index].subpastas_indices[i];
        drive[index].tamanho_total += processarHierarquia(filho_idx, nivel_atual + 1, limite_profundidade);
    }

    // Impressão com formatação de BI
    for (int i = 0; i < nivel_atual; i++) printf("  "); // Indentação
    
    printf("|-- %s [%.2f GB]", drive[index].nome, drive[index].tamanho_total);
    
    if (drive[index].tamanho_total > LIMITE_ALERTA) {
        printf(" [!] ALERTA: GARGALO DETECTADO");
    }
    printf("\n");

    return drive[index].tamanho_total;
}

int main() {
    // 1. Configuração da Árvore via Índices
    strcpy(drive[0].nome, "RAIZ");
    drive[0].tamanho_proprio = 10.0;
    drive[0].qtd_sub = 2;
    drive[0].subpastas_indices[0] = 1;
    drive[0].subpastas_indices[1] = 2;

    strcpy(drive[1].nome, "Projetos_TI");
    drive[1].tamanho_proprio = 50.0;
    drive[1].qtd_sub = 1;
    drive[1].subpastas_indices[0] = 3;

    strcpy(drive[2].nome, "Backups_Antigos");
    drive[2].tamanho_proprio = 350.0;
    drive[2].qtd_sub = 0;

    strcpy(drive[3].nome, "Videos_Aulas");
    drive[3].tamanho_proprio = 280.0;
    drive[3].qtd_sub = 0;

    int limite;
    clock_t t;

    printf("Defina o limite de profundidade do mergulho: ");
    scanf("%d", &limite);

    printf("\n--- RELATORIO DE HIERARQUIA INTELIGENTE ---\n");

    t = clock();

    processarHierarquia(0, 0, limite);

    t = clock() - t;

    double tempo_execucao = ((double)t)/CLOCKS_PER_SEC;

    printf("-------------------------------------------\n");
    printf("Tempo de execucao: %f segundos\n", tempo_execucao);
    printf("Ciclos por segundo: %ld\n", (long)t);

    return 0;
}
