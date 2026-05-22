/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Exibir e comparar o tamanho em bytes de                     */
/*              diferentes tipos de ponteiros e variáveis                   */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    // Declara as variáveis
    int a=8;
    float b=3.14;
    char c='Y';
    double d=51.23;

    // Armazena as variáveis em ponteiros
    int *ptr_a=&a;
    float *ptr_b=&b;
    char *ptr_c=&c;
    double *ptr_d=&d;

    // Exibe o tamanho, em bytes, de cada ponteiro
    printf("Tamanho de int*: %zu bytes\n", sizeof(int*));
    printf("Tamanho de float*: %zu bytes\n", sizeof(float*));
    printf("Tamanho de char*: %zu bytes\n", sizeof(char*));
    printf("Tamanho de double*: %zu bytes\n", sizeof(double*));

    /*Aqui, o tamanho dos ponteiros não varia dependendo do tipo da variável.*/
    /*Todos armazenam apenas enderecos de memória*/

    // Exibe o tamanho, em bytes, de cada variável
    printf("Tamanho de *ptr_a: %zu bytes\n", sizeof(*ptr_a));
    printf("Tamanho de *ptr_b: %zu bytes\n", sizeof(*ptr_b));
    printf("Tamanho de *ptr_c: %zu bytes\n", sizeof(*ptr_c));
    printf("Tamanho de *ptr_d: %zu bytes\n", sizeof(*ptr_d));

    /*Já aqui, char ocupa apenas 1 byte na memória,*/
    /*int e float ocupam 4 bytes e double ocupa 8 bytes*/

    return 0;
}
