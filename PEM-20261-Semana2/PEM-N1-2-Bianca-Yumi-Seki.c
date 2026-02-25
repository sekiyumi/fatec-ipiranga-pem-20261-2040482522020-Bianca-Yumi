#include <stdio.h>
#include <string.h>
int main() {
char frase[100];
int i, palavras=0,tamanho;
    
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    
    tamanho=strlen(frase);
    
    for(i=0;frase[i]!='\0';i++){
      if(frase[i]==' '){
        palavras++;
      }
    }
    if(tamanho>1){
        palavras=palavras + 1;
    }
    printf("Total de palavras: %d\n", palavras);

  return 0;
}
