#include<stdio.h>
#include<string.h>
struct produto{
    char nomeProduto[10];
};
int main(){
    struct produto listaProduto[10];
    int i, opcao;
    do{
        printf("\n--MENU CRUD--\n");
        printf("1-Cadastrar produtos\n");
        printf("2-Listar produtos\n");
        printf("3-Atualizar produto\n");
        printf("4-Deletar produto\n");
        printf("0-Sair\n");
        printf("Opcao: ");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                for(i=0;i<10;i++){
                    printf("\n--Cadastro do Produto %d--\n", i+1);
                    printf("Nome: ");
                    scanf("%s", listaProduto[i].nomeProduto);
                }
            break;
            case 2:
                for(i=0;i<10;i++){
                    printf("\n%s\n",listaProduto[i].nomeProduto);
                }
            break;
            case 3:
                printf("\n--Qual produto deseja atualizar?--\n");
                printf("Produto ");
                scanf("%d",&i);

                printf("\nNovo nome: ");
                scanf("%s", listaProduto[i-1].nomeProduto);
            break;
            case 4:
                printf("\nQual produto deseja deletar?\n");
                printf("Produto ");
                scanf("%d",&i);

                strcpy(listaProduto[i-1].nomeProduto,"");

                printf("\nProduto deletado\n");
            break;
        }
    }while(opcao != 0);
return 0;
}
