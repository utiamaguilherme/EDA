#include <stdlib.h>
#include <stdio.h>

#include "lista_dupla.h"

typedef struct n_d
{
	int dia, mes, ano, hora, min;
	float altura;
	struct n_d* proximo;
	struct n_d* anterior;
} no_dupla;

lista_dupla* criar_lista_dupla(){
	lista_dupla* lista = malloc(sizeof(lista_dupla));
	lista->primeiro = NULL;
	lista->ultimo = NULL;
	return lista;
}

no_dupla* criar_no(int dia, int mes, int ano, int hora, int min, float altura){
	no_dupla* no = malloc(sizeof(no_dupla));
	no->proximo = NULL;
	no->anterior = NULL;
	no->dia = dia;
	no->mes = mes;
	no->ano = ano;
	no->hora = hora;
	no->min = min;
	no->altura = altura;
	return no;
}

void append_lista_dupla(lista_dupla* lista,int dia, int mes, int ano, int hora, int min, float altura){
	no_dupla* n = criar_no(dia, mes, ano, hora, min, altura);
	no_dupla* temp = lista->ultimo;
	if(temp != NULL){
		temp->proximo = n;
		n->anterior = temp;
		lista->ultimo = n;
	}else{
		lista->primeiro = n;
		lista->ultimo = n;
	}
}

int size_lista_dupla(lista_dupla* lista){
	no_dupla* temp = lista->primeiro;
	int size = 0;
	printf("CASO DE TESTE\n--------------\n");
	while(temp != NULL){
		printf("%d %d %d %d %f\n", temp -> dia, temp -> mes, temp -> ano, temp -> hora, temp -> altura);
		temp = temp->proximo;
		size++;
	}
	return size;
}

void preppend_lista_dupla(lista_dupla* lista,int dia, int mes, int ano, int hora, int min, float altura){
	no_dupla* n = criar_no(dia, mes, ano, hora, min, altura);
	no_dupla* temp = lista->primeiro;
	if(temp != NULL){
		temp -> anterior = n;
		n -> proximo = temp;
		lista -> primeiro = n;
	}
	else{
		lista->primeiro = n;
		lista->ultimo = n;
	}
}

float buscar_altura_por_dia_mes_ano_hora(lista_dupla* lista, int dia, int mes, int ano, int hora){
	no_dupla *aux = lista->primeiro;
	while(aux != NULL){
		// printf("%d %d %d %d %f\n", aux -> dia, aux -> mes, aux -> ano, aux -> hora, aux -> altura);
		if(aux -> dia == dia && aux -> mes == mes && aux -> ano == ano && aux -> hora == hora)
			return aux -> altura;
		else
			aux = aux -> proximo;
	}
	return -1;
}
