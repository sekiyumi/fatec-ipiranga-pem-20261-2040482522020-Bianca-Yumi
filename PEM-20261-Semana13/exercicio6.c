/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Acessar e modificar os campos de                            */
/*              uma estrutura utilizando ponteiros                          */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>

struct Produto{
    // Declara as variáveis
    int estoque;
    char nome[40];
    float preco;
};

int main(){
    struct Produto prod;
    struct Produto *p = &prod;

    // Copia uma string para o campo nome
    strcpy((*p).nome,"Teclado");
    // Atribui os valores a struct
    (*p).preco=249.90;
    (*p).estoque=15;

    // Exibe os dados armazenados
    printf("Nome: %s\n",(*p).nome);
    printf("Preco: %f\n",(*p).preco);
    printf("Estoque: %d\n\n",(*p).estoque);

    
    strcpy(p->nome,"Mouse");
    p->preco=129.90;
    p->estoque=30;

    // Exibe os novos dados
    printf("Nome: %s\n",p->nome);
    printf("Preco: %f\n",p->preco);
    printf("Estoque: %d\n\n",p->estoque);

    return 0;
}
