/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Criar uma struct do tipo aluno, mostrar                     */
/*              os endereços de memória e calcular                          */
/*              a distancia, em bytes, entre eles                           */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

// Declara a struct Aluno
struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main(){

    // Declara a variável do tipo struct Aluno
    struct Aluno dados;

    // Copia a string "Yumi" para o campo nome
    strcpy(dados.nome, "Yumi");

    // Atribui valores aos outros campos da struct
    dados.matricula=204048252202;
    dados.media=8.5;

    // Exibe os endereços de memória da struct
    printf("ENDERECOS\n\nnome: %p\nmatricula: %p\nmedia: %p",
           &dados.nome, &dados.matricula, &dados.media);
    printf("ENDERECOS:\n");
    printf("Nome: %p",&dados.nome);
    printf("Matricula: %p",&dados.matricula);
    printf("Media: %p",&dados.media);


    // Calcula e exibe a distância, em bytes, entre os campos
    printf("DISTANCIA DOS ENDERECOS:\n");
    printf("Entre nome e matricula: %td\n",(char*)&dados.nome - (char*)&dados.matricula);
    printf("distancia entre matricula e media: %td\n",(char*)&dados.media - (char*)&dados.matricula);

    return 0;
}
