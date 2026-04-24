/*--------------------------------------------------------------------------*/
/* FATEC-Ipiranga      ADS Vespertino                                      */
/* Bianca Yumi Seki                                                        */
/* Objetivo: Código Novo 2 - Paradigma Iterativo                           */
/* Data: 24/04/2026 */
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

typedef struct {
    int index;
    int nivel;
    int visitado;
} ItemPilha;

Pasta drive[MAX_PASTAS];

void processarHierarquiaIterativa(int raiz_idx, int limite_profundidade) {
    ItemPilha pilha[MAX_PASTAS * 2];
    int topo = -1;

    pilha[++topo] = (ItemPilha){raiz_idx, 0, 0};

    while (topo >= 0) {
        ItemPilha *atual = &pilha[topo];

        if (atual->index == -1 || atual->nivel > limite_profundidade) {
            topo--;
            continue;
        }

        if (!atual->visitado) {
            atual->visitado = 1;
            drive[atual->index].tamanho_total = drive[atual->index].tamanho_proprio;

            for (int i = drive[atual->index].qtd_sub - 1; i >= 0; i--) {
                pilha[++topo] = (ItemPilha){drive[atual->index].subpastas_indices[i], atual->nivel + 1, 0};
            }
        } else {
            int idx = atual->index;
            
            for (int i = 0; i < drive[idx].qtd_sub; i++) {
                int filho_idx = drive[idx].subpastas_indices[i];
                if (filho_idx != -1) {
                    drive[idx].tamanho_total += drive[filho_idx].tamanho_total;
                }
            }

            for (int i = 0; i < atual->nivel; i++) printf("  ");
            printf("|-- %s [%.2f GB]", drive[idx].nome, drive[idx].tamanho_total);
            
            if (drive[idx].tamanho_total > LIMITE_ALERTA) printf(" [!] ALERTA: GARGALO DETECTADO");
            printf("\n");
            
            topo--;
        }
    }
}

int main() {
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

    printf("\n--- RELATORIO DE HIERARQUIA ITERATIVA ---\n");

    t = clock();
    processarHierarquiaIterativa(0, limite);
    t = clock() - t;

    double tempo_execucao = ((double)t)/CLOCKS_PER_SEC;

    printf("-------------------------------------------\n");
    printf("Tempo de execucao: %f segundos\n", tempo_execucao);
    printf("Ciclos processados: %ld\n", (long)t);

    return 0;
}
