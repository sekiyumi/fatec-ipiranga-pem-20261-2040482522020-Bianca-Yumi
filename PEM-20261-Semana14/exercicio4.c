/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Validar e classificar triângulos                            */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>

int main(){
    // Declara as variáveis
    float a,b,c,maior,l2,l3,quadradoMaior,somaQuadradosLados;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    // Valida o triângulo
    if ((a<b+c) && (b<a+c) && (c<a+b)){
        printf("Triângulo válido.\n");

        // Classifica o triângulo quanto os lados
        if (a==b && b==c){
            printf("Triângulo Equilátero\n");
        }
        else if (a==b || b==c || a==c){
            printf("Triângulo Isósceles\n");
        }
        else{
            printf("Triângulo Escaleno\n");
        }

        // Classificação por ângulo
        if(a>=b && a >= c){
            maior=a;
            l2=b;
            l3=c;
        }
        else if(b>=a && b>=c){
            maior=b;
            l2=a;
            l3=c;
        }
        else{
            maior=c;
            l2=a;
            l3=b;
        }

        quadradoMaior=maior*maior;
        somaQuadradosLados=(l2*l2) + (l3*l3);

        // Exibe a classificação do triângulo de acordo com os ângulos
        if(quadradoMaior==somaQuadradosLados){
            printf("Triângulo Retângulo\n");
        }
        else if(quadradoMaior>somaQuadradosLados){
            printf("Triangulo Obtusângulo\n");
        }
        else{
            printf("Triângulo Acutângulo\n");
        }

    } else {
        printf("Erro: Os lados informados NÃO formam um triângulo válido.\n");
    }

    return 0;
}
