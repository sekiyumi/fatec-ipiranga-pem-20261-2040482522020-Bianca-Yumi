/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Criar variáveis dos tipos int, float e char,                */
/*              armazenar seus endereços em ponteiros e exibir              */
/*              na tela os seus valores, endereços de memória               */
/*              das variáveis, e os valores acessados pelos ponteiros.      */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    // Declara as variáveis 
    int a=8;
    float b=3.14f;
    char c='Y';

    // Armazena as variáveis em ponteiros
    int *ptr_a=&a;
    float *ptr_b=&b;
    char *ptr_c=&c;

    // Exibe as informações
    printf("int: \n");
    printf("Valor da variavel: %d\n",a);
    printf("Endereco da variavel: %p\n",&a);
    printf("Endereco no ponteiro: %p\n",ptr_a);
    printf("Valor via ponteiro: %d\n\n",*ptr_a);

    printf("float: \n");
    printf("Valor da variavel: %.2f\n",b);
    printf("Endereco da variavel: %p\n",&b);
    printf("Endereco no ponteiro: %p\n",ptr_b);
    printf("Valor ponteiro: %.2f\n\n",*ptr_b);

    printf("char: \n");
    printf("Valor da variavel: %c\n",c);
    printf("Endereco da variavel: %p\n",&c);
    printf("Endereco no ponteiro: %p\n",ptr_c);
    printf("Valor ponteiro: %c\n",*ptr_c);

    return 0;
}
