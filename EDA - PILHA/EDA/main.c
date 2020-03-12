#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main(void){

  char frase[50];
  int n=1;
  while(n == 1){
    printf("%s\n","digite uma frase (somente caixa baixa!):");
    printf("%s\n","termine a frase com um ponto (.)");
    scanf("%[^\n]",frase);
    printf("\nCriando a pilha para verificacao...\n");
    Pilha *p = criar_pilha();
    printf("%s\n","Vamos adicionar a frase na pilha...\n");
    for(int i=0; frase[i] != '.'; i++){
      pilha_colocar(p,frase,i);
    }
    printf("%s\n","Vamos verificar se a frase eh palindromo ou nao:\n");
    printf("\n%s\n",frase);
    verifica_pilha(p);
    printf("Liberando pilha...\n\n");
    liberar_pilha(p);
     /////////////////
    do{
      printf("Voce quer colocar outra frase para a verificacao?\n");
      printf("1. SIM\n0. NAO\n");
      scanf("%d", &n);
    }while(n<0 || n>1);
  }
  return 0;
}
