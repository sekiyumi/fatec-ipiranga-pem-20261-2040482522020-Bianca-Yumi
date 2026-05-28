/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Calculadora modular                                         */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int mdc(int a, int b){
    while (b != 0){
        int temp=b;
        b=a%b;
        a=temp;
    }

    return a;
}

int potencia(int base, int exp) {
    int i,resultado = 1;
    for (i=0;i<exp;i++) {
        resultado *= base;
    }
    return resultado;
}

int primo(int n) {
    int i;
    if (n<=1)
        return 0;
    for (i=2;i<n;i++){
        if (n%i==0)
            return 0;
    }
    return 1;
}

void decimalBinario(int n) {
    int bin[32],i=0,j;

    while (n>0){
        bin[i]=n%2;
        n/=2;
        i++;
    }

    for (j=i-1;j> 0;j--) {
        printf("%d",bin[j]);
    }
    printf("\n\n");
}
int main() {
    int opcao,a,b,base,exp,n;
    do {
        printf("1 - MDC\n");
        printf("2 - Potencia\n");
        printf("3 - Primo\n");
        printf("4 - Decimal para Binario\n");
        printf("0 - Sair\n");

        scanf("%d",&opcao);

        if (opcao==1) {
            printf("Digite dois numeros: ");
            scanf("%d %d",&a,&b);

            printf("MDC = %d\n",mdc(a,b));

        } else if (opcao==2) {
            printf("Base e expoente: ");
            scanf("%d %d",&base,&exp);

            printf("Resultado = %d\n",potencia(base,exp));

        } else if (opcao==3) {
            printf("Digite um numero: ");
            scanf("%d", &n);

            if (primo(n)){
                printf("Numero primo\n");
            }
            else{
                printf("Nao eh primo\n");
            }
        } else if (opcao==4) {
            printf("Digite um numero: ");
            scanf("%d",&n);

            decimalBinario(n);
        }

    } while (opcao != 0);

    return 0;
}
