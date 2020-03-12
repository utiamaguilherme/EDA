#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"    


Pilha *criar_pilha(){
  Pilha *p = malloc(sizeof(Pilha));
  p->indice = 0;
  return p;
}

void pilha_colocar(Pilha *p, char *letra,int i){
  char aux;

  aux = letra[i];
  p->letra[p->indice] = aux;
  p->indice++;
}

void verifica_pilha(Pilha *p){
//////////////////////////////////////////////////////////
  int cont = 0;
  printf("o: ");
  for(int i=0; i< p->indice; i++){
    printf("%c",p->letra[i]);
  }
  // printf("%s\n", p->letra);
  printf("\n");
//////////////////////////////////////////////////////////

  printf("r: ");
  int j;
  for(int i=p->indice, j=1; i > 0; i--, j++){
    printf("%c",p->letra[(p->indice)-j]);
  }
  printf("\n\n");
//////////////////////////////////////////////////////////

  for(int i=0; i < p-> indice; i++){
    if(p->letra[i] != p->letra[(p->indice)-i-1]){
      printf("%s\n","Nao eh palindromo");
      cont ++;
      break;
    }
  }
  if(cont == 0) printf("Eh palindromo\n\n");
}

void liberar_pilha(Pilha *p){
  free(p);
}
