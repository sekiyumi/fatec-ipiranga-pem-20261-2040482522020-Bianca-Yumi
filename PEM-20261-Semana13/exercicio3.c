/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Trocar os valores de duas variáveis utilizando ponteiros    */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
// Função para trocar os valores das variáveis
void trocar(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    // Declara as variáveis
    int x=10, y=20;

    printf("Antes da troca: x = %d, y = %d\n",x,y);
    
    // Passa os endereços usando o operador &
    trocar(&x, &y);
    
    // Exibe o resultado depois da troca de valores
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
