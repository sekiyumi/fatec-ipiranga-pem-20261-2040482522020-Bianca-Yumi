/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Biblioteca de operações com string                          */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include "stringutil.h"

// Calcula o tamanho
int m_strlen(char *s) {
    int t=0;
    while (s[t]!='\0') t++;
    return t;
}
// Conta vogais maiúsculas e minúsculas
int contaVogais(char *s){
    int c=0;
    for (int i=0;s[i] != '\0';i++) {
        char ch = s[i];
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            c++;
        }
    }
    return c;
}

// Inverte a string passada em memória
void inverteCString(char *s){
    int tam=m_strlen(s),i=0,j=tam-1;
    while (i<j){
        char temp = s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}

int ePalindromo(char *s) {
    int tam=m_strlen(s),i=0,j=tam-1;
    while (i<j) {
        if (s[i] == ' '){
            i++; continue;
        }
        if (s[j] == ' '){
            j--; continue;
        }
        if (s[i] != s[j]){
            i++;
            j--;
        }
        return 0;
    }
    return 1;
}
