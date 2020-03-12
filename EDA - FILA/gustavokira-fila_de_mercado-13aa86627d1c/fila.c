#include <stdlib.h>
#include <stdio.h>

#include "fila.h"

typedef struct n{
	int i;
	struct n* proximo;
} No;


Fila* criar_fila(){
	Fila* f = malloc(sizeof(Fila));
	f->ultimo= NULL;
	return f;
}

void colocar_fila(Fila* f, int i){

	No* n = malloc(sizeof(No));
	n->i = i;
	f->ultimo = n;
	if(f->ultimo == NULL){
		// f->ultimo = n;
		// n->i = i;
		n->proximo = NULL;
	}
	else{
		No* aux = f->ultimo;
		// f->ultimo = n;
		// n->i = i;
		n->proximo = aux;
	}
	// n->proximo = NULL;
	//
	// n->i = i;
	// if(f->ultimo==NULL){
	// 	f->ultimo=n;
	// }else{
	// 	No* aux = f->ultimo;
	// 	while(aux->proximo != NULL){
	// 		aux = aux->proximo;
	// 	}
	// 	aux->proximo = n;
	// }


}

int retirar_fila(Fila* f){

	No* aux = f->ultimo;
	while(aux->proximo->proximo != NULL){
		 // if (aux->proximo->proximo == NULL){
		 // f->ultimo = aux;
			 // break;
		 // }
		 aux = aux->proximo;
	}
	int i;
	No* aux1 = aux->proximo;

	i = aux1 -> i;

	aux1->proximo = NULL;



	free(aux1);
	return i;


	// No* n = f->ultimo;
	// int i = n->i;
	// f->ultimo= n->proximo;
	// free(n);
	//
	// return i;
}

int esta_vazia_fila(Fila* f){
	if(f->ultimo== NULL) return 1;
	else return 0;
}

void destruir_fila(Fila* f){
	No* aux = f->ultimo;
	while(aux->proximo != NULL){
		No* n = aux;
		aux = aux->proximo;
		free(n);
	}
	free(f->ultimo);
	free(f);
}
