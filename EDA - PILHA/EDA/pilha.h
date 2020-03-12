#ifndef pilha_h

#define pilha_h
typedef struct{
  char letra[50];//?? *letra;
  int indice;
}Pilha;

Pilha* criar_pilha();
void verifica_pilha(Pilha *p);
void liberar_pilha(Pilha *p);
int pilha_vazia(Pilha *p);
void pilha_colocar(Pilha *p, char *letra,int i);

#endif
