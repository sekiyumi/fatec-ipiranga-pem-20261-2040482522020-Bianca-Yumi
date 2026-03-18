/*Bianca Yumi Seki
16/03/2026
Fatec Ipiranga ADS Vespertino
Objetivo: Codigo Cheque Pastor*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define tam 8
// matriz multidimensional que guarda o nome das peças
char tabuleiro[tam][tam][4];
// função para iniciar o tabuleiro
void iniciarTabuleiro(){
    int i,j;
    char peca[4];
    char pecasBrancas[8]={'T','C','B','D','R','B','C','T'},pecasPretas[8]={'t','c','b','d','r','b','c','t'};
    // Limpar tabuleiro
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            strcpy(tabuleiro[i][j], " . ");
        }
    }
   // Peças principais brancas
    for(j=0; j<8; j++){
        peca[0] = pecasBrancas[j];
        peca[1] = '1' + j;
        peca[2] = '\0'; // Finalizador de string obrigatório para o strcpy
        strcpy(tabuleiro[0][j],peca);
    }
    // Peões brancos
    for(j=0; j<8; j++){
        peca[0] = 'P';
        peca[1] = '1' + j;
        peca[2] = '\0';
        strcpy(tabuleiro[1][j],peca);
    }
    // Peças principais pretas
    for(j=0; j<8; j++){
        peca[0] = pecasPretas[j];
        peca[1] = '1' + j;
        peca[2] = '\0';
        strcpy(tabuleiro[7][j],peca);
    }
    // Peões pretos
    for(j=0; j<8; j++){
        peca[0] = 'p';
        peca[1] = '1' + j;
        peca[2] = '\0';
        strcpy(tabuleiro[6][j],peca);
    }
}
// função para mostrar o tabuleiro
void mostrarTabuleiro(){
    int i,j;
    printf("\n   1  2  3  4  5  6  7  8\n");
    for(i=7;i>=0;i--){
        printf("%c  ",'A'+i);
        for(j=0;j<tam;j++){
            printf("%3s ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// função para mover peça
void moverPeca(int li, int ci, int lf, int cf) {
    // Copia a peça da origem para o destino
    strcpy(tabuleiro[lf][cf], tabuleiro[li][ci]);
    // Define a posição de origem como "..." conforme a Figura 1
    strcpy(tabuleiro[li][ci], "..."); 
}
// programa principal
int main(){
    iniciarTabuleiro();
    printf("\nPOSICAO INICIAL\n");
    mostrarTabuleiro();

    printf("=========== JOGADA 1 ===========\n");
    printf("Peao branco para D5\n");
    moverPeca(1,4,3,4);
    mostrarTabuleiro();
    printf("Peao preto para E5\n");
    moverPeca(6,4,4,4);
    mostrarTabuleiro();

    printf("=========== JOGADA 2 ===========\n");
    printf("Bispo branco para C4\n");
    moverPeca(0,5,3,2);
    mostrarTabuleiro();
    printf("Cavalo preto para C6\n");
    moverPeca(7,1,5,2);
    mostrarTabuleiro();

    printf("=========== JOGADA 3 ===========\n");
    printf("Dama branca para H5\n");
    moverPeca(0,3,3,7);
    mostrarTabuleiro();
    printf("Cavalo preto para F6\n");
    moverPeca(7,6,5,5);
    mostrarTabuleiro();

    printf("=========== JOGADA 4 ===========\n");
    printf("Dama branca para F7 (XEQUE MATE!)\n");
    moverPeca(3,7,6,5);
    mostrarTabuleiro();
    return 0;
}
