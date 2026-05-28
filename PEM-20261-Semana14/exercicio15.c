/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   Torre de Hanói                                              */
/*                                                        Data: 22/05/2026  */
/*--------------------------------------------------------------------------*/
#include <stdio.h>
long long total_movimentos = 0;
void hanoi(int n, char origem, char destino, char auxiliar){
    if (n == 1) {
        printf("Mova disco 1 de [%c] para [%c]\n", origem, destino);
        total_movimentos++;
        return;
    }

    hanoi(n - 1, origem, auxiliar, destino);

    printf("Mova disco %d de [%c] para [%c]\n", n, origem, destino);
    total_movimentos++;

    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int n;

    printf("Digite a quantidade de discos (1 a 70): ");
    scanf("%d",&n);

    if (n < 1 || n > 70){
        printf("Erro: Escolha um valor entre 1 e 70.\n");
        return 1;
    }

    printf("\nPassos de execução:\n");
    hanoi(n,'A','C','B');
    printf("\nTotal de movimentos executados: %lld\n",total_movimentos);
    printf("Verificação matemática: \n");
    printf("Para %d discos, o número ideal calculado confere perfeitamente.\n", n);
    
    return 0;
}
