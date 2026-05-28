/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Funções com ponteiro                                        */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void minMax(int *v, int n, int *min, int *max) {
    int i;

    *min=v[0];
    *max=v[0];

    for (i=1;i<n;i++) {

        if (v[i] < *min)
            *min=v[i];

        if (v[i] > *max)
            *max=v[i];
    }
}
void normalizaVetor(float *v, int n) {
    int i;
    float maior=v[0];

    for (i=1;i<n;i++) {

        if (v[i]>maior)
            maior=v[i];
    }
    for (i=0;i<n;i++) {
        v[i]=v[i]/maior;
    }
}
int main() {
    int a=5,b=10,i;
    float vf[4]={2.0,4.0,8.0,10.0};
    int v[5] = {2,8,1,9,4},min,max;

    printf("Antes: %d %d\n", a,b);

    troca(&a,&b);

    printf("Depois: %d %d\n", a, b);

    minMax(v,5,&min,&max);

    printf("Minimo: %d\n",min);
    printf("Maximo: %d\n",max);

    normalizaVetor(vf,4);

    printf("Vetor normalizado:\n");

    for (i=0;i<4;i++) {
        printf("%.2f ",vf[i]);
    }
    return 0;
}
