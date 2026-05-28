/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Biblioteca de operações com string                          */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include "stringutil.h"

int main() {
    char str1[50] = "arara";
    char str2[50] = "fatec ipiranga";

    printf("String 1: '%s'\n",str1);
    printf("Vogais: %d\n",contaVogais(str1));
    printf("É palíndromo? %s\n",ePalindromo(str1));
    inverteCString(str1);
    printf("Invertida: '%s'\n\n", str1);

    printf("String 2: '%s'\n", str2);
    printf("Vogais: %d\n",contaVogais(str2));
    printf("É palíndromo? %s\n",ePalindromo(str2));
    inverteCString(str2);
    printf("Invertida: '%s'\n", str2);

    return 0;
}
