/*--------------------------------------------------------------------------*/
/*  FATEC-Ipiranga      ADS Verspertino                                     */
/*  Bianca Yumi Seki    -    204048252202                                   */
/*  Objetivo:   calcular estatísticas de um vetor de inteiros               */
/*              calcular a soma, a média, o maior e o menor valor e         */
/*              exibir os resultados ao final da execução                   */
/*                                                        Data: 15/05/2026  */
/*--------------------------------------------------------------------------*/
// Função responsável por calcular estatísticas do vetor
void estatisticas(int *v, int *soma, float *media, int *maior, int *menor){
    int i;
    printf("Vetor: ");
    // Percorre todos os elementos do vetor
    for(i=0;i<6; i++){
        // Exibe o valor atual do vetor
        printf("%d ", *(v+i));
        // Soma os elementos do vetor
        *soma+= *(v+i);
        // Verifica se o valor atual é maior
        if(*maior< *(v+i)){
            *maior= *(v+i);
        }

        // Verifica se o valor atual é menor
        else if(*menor< *(v+i)){
            *menor= *(v+i);
        }
    }
    printf("\n\n");
    // Calcula a média dos valores
    *media=(*soma)/6.0;

}

int main(){
    // Declara os valores do vetor
    int vetor[6]={1,2,3,4,5,6};

    // Variáveis para armazenar resultados
    int soma=0,maior,menor;

    // Ponteiros para as variáveis
    int *pVetor=vetor;
    int *pSoma=&soma;
    int *pMaior=&maior;
    int *pMenor=&menor;

    // Inicializa maior e menor com o primeiro valor do vetor
    *pMenor=*pVetor;
    *pMaior=*pVetor;

    // Variável e ponteiro para média
    float media;
    float *pMedia = &media;

    // Chama a função para calcular as estatísticas
    estatisticas(pVetor,pSoma,pMedia,pMaior,pMenor);

    // Exibe os resultados finais
    printf("Soma: %d\n",*pSoma);
    printf("Media: %f\n",*pMedia);
    printf("Maior valor: %d\n",*pMaior);
    printf("Menor valor: %d\n",*pMenor);

    return 0;
}
