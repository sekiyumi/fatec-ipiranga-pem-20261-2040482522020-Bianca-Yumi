/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Calcular IMC                                                */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    // Declara as variáveis
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f",&peso);
    printf("Digite a altura em metro: ");
    scanf("%f",&altura);

    // Caso os valores digitados sejam inválidos
    if (peso <= 0.0f || altura <= 0.0f) {
        printf("A altura e peso devem ser maiores que 0\n");
        return 1;
    }

    // Cálculo do IMC
    imc=peso/(altura*altura);

    printf("IMC: %.2f -",imc);

    // Classificação utilizando if encadeado [cite: 38]
    if (imc<18.5f){
        printf("Abaixo do peso\n");
    }
    else if (imc<25.0f){
        printf("Peso normal\n");
    }
    else if (imc<30.0f) {
        printf("Sobrepeso\n");
    }
    else {
        printf("Obesidade\n");
    }

    return 0;
}
