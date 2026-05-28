/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Converter unidades de medida cm, m, km e milhas             */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    // Declara as variáveis
    int cm;
    float metros;
    double km, milhas;

    // Lê a variavel cm
    printf("Digite a distancia em centimetros: ");
    scanf("%d",&cm);

    // Verifica se valor é válido
    if (cm>0) {
        metros=cm/100.0f;
        km=cm/100000.0;
        milhas=km/1.60934;

        // Exibe resultados
        printf("\nMetros: %.2f\n",metros);
        printf("Quilometros: %.5lf\n",km);
        printf("Milhas: %.5lf\n",milhas);

    } else {
        printf("Erro: valor invalido.\n");
    }
    return 0;
}
