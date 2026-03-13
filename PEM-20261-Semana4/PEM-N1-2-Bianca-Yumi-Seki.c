/*Bianca Yumi Seki
11/03/2026
Fatec Ipiranga ADS Vespertino
Objetivo: Criar um jogo da velha*/
#include <stdio.h>
#include <stdlib.h>
// tabuleiro do jogo (3x3) e jogador inicial
char tabuleiro[3][3],jogador='X';
// inicializa o tabuleiro
void iniciar(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            tabuleiro[i][j]=' ';
        }
    }
}
// mostra o tabuleiro
void mostrar(){
    int i;
    printf("\n");
    for(i=0;i<3;i++){
        printf(" %c | %c | %c ",
               tabuleiro[i][0],
               tabuleiro[i][1],
               tabuleiro[i][2]);
        if(i<2)
            printf("\n---+---+---\n");
    }
    printf("\n\n");
}
// verifica vitória
int verificarVitoria(){
    int i,j,cont;
    for(i=0;i<3;i++){
    // verifica linha
    cont = 0;
    for(j=0;j<3;j++){
        if(tabuleiro[i][j]==jogador)
            cont++;
    }
    if(cont==3)
        return 1;
    // verifica coluna
    cont = 0;
    for(j=0;j<3;j++){
        if(tabuleiro[j][i]==jogador)
            cont++;
    }
    if(cont == 3)
        return 1;
    }
    // verifica diagonal principal
    cont = 0;
    for(i=0;i<3;i++){
        if(tabuleiro[i][i]==jogador)
            cont++;
    }
    if(cont==3)
        return 1;
    // verifica diagonal secundaria
    cont = 0;
    for(i=0;i<3;i++){
        if(tabuleiro[i][2-i]==jogador)
            cont++;
    }
    if(cont==3)
        return 1;
    return 0;
}
int main(){
    int linha,coluna,jogadas=0;
    iniciar();
    mostrar();
    while(jogadas<9){
        // pede posição até ser válida
        do{
            printf("Jogador %c\n",jogador);

            printf("Linha (1-3): ");
            scanf("%d",&linha);

            printf("Coluna (1-3): ");
            scanf("%d",&coluna);
            linha--;
            coluna--;
            if(tabuleiro[linha][coluna]!=' ')
                printf("Posicao ocupada! Escolha outra.\n");
        }while(tabuleiro[linha][coluna]!=' ');
        tabuleiro[linha][coluna]=jogador;
        jogadas++;
        mostrar();
        if(verificarVitoria()){
            printf("O jogador %c venceu!\n",jogador);
            return 0;
        }
        if(jogador=='X')
            jogador='O';
        else
            jogador='X';
    }
    printf("Deu velha!\n");
    return 0;
}
