/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Fazer uma calculadora de média ponderada                    */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    // Declara as variáveis
    double n1,n2,n3,media;
    int p1,p2,p3;

    // Lê a nota e respectivo peso digitada pelo usuario
    printf("Digite a nota 1 e seu peso: ");
    scanf("%lf %d",&n1,&p1);

    printf("Digite a nota 2 e seu peso: ");
    scanf("%lf %d",&n2,&p2);

    printf("Digite a nota 3 e seu peso: ");
    scanf("%lf %d",&n3,&p3);

    
    if ((p1+p2+p3)==0) {
        printf("Erro: A soma dos pesos não pode ser zero.\n");
        return 1; 
    }

    // Cálculo da média ponderada
    media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

    // Exibe o resultado
    printf("\nMédia= %.2f\n",media);

    // Exibe o tamanho em bytes
    printf("Tamanho do tipo double (notas e media): %lu bytes\n",sizeof(double));
    printf("Tamanho do tipo int (pesos): %lu bytes\n",sizeof(int));

    return 0;
}
