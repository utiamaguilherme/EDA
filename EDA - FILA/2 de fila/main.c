#include <stdlib.h>
#include <stdio.h>

#include "lista_dupla.h"

void inserir_tabula_de_mares(lista_dupla* lista);

int main(void){

	lista_dupla* lista = criar_lista_dupla();
	inserir_tabula_de_mares(lista);

	int size = size_lista_dupla(lista);
	printf("size: %i\n",size);

	float busca = buscar_altura_por_dia_mes_ano_hora(lista, 1, 5, 2018, 19);
	printf("RESULTADO DA BUSCA:\n");
	if(busca == -1)
		printf("Não encontrado\n");
	else
		printf("%0.1f\n", busca);

	return 0;
}

void inserir_tabula_de_mares(lista_dupla* lista){
	append_lista_dupla(lista, 1, 1, 2018, 4, 11, 1.5);
	preppend_lista_dupla(lista, 2, 1, 2018, 4, 11, 1.5);
	append_lista_dupla(lista, 3, 1, 2018, 4, 11, 1.5);
	// preppend_lista_dupla(lista, 16, 5, 2018, 8, 15, 0.1);
	// preppend_lista_dupla(lista, 16, 5, 2018, 11, 45, 0.7);
	// preppend_lista_dupla(lista, 16, 5, 2018, 13, 11, 0.7);
	// preppend_lista_dupla(lista, 16, 5, 2018, 17, 8, 1.7);
	// preppend_lista_dupla(lista, 16, 5, 2018, 21, 8, 0.4);
	// append_lista_dupla(lista, 16, 5, 2018, 4, 11, 1.5);
	// append_lista_dupla(lista, 16, 5, 2018, 8, 15, 0.1);
	// append_lista_dupla(lista, 16, 5, 2018, 11, 45, 0.7);
	// append_lista_dupla(lista, 16, 5, 2018, 13, 11, 0.7);
	// append_lista_dupla(lista, 16, 5, 2018, 17, 8, 1.7);
	// append_lista_dupla(lista, 16, 5, 2018, 21, 8, 0.4);
	// append_lista_dupla(lista, 17, 5, 2018, 0, 2, 0.8);
	// append_lista_dupla(lista, 17, 5, 2018, 1, 45, 0.7);
	// append_lista_dupla(lista, 17, 5, 2018, 5, 2, 1.4);
	// append_lista_dupla(lista, 17, 5, 2018, 9, 0, 0.1);
	// append_lista_dupla(lista, 17, 5, 2018, 12, 8, 0.7);
	// append_lista_dupla(lista, 17, 5, 2018, 14, 4, 0.6);
	// append_lista_dupla(lista, 17, 5, 2018, 17, 58, 1.7);
	// append_lista_dupla(lista, 17, 5, 2018, 21, 45, 0.5);
	// append_lista_dupla(lista, 18, 5, 2018, 0, 43, 1.0);
	// append_lista_dupla(lista, 18, 5, 2018, 3, 4, 0.7);
	// append_lista_dupla(lista, 18, 5, 2018, 6, 2, 1.2);
	// append_lista_dupla(lista, 18, 5, 2018, 9, 51, 0.3);
	// append_lista_dupla(lista, 18, 5, 2018, 12, 53, 0.7);
	// append_lista_dupla(lista, 18, 5, 2018, 15, 0, 0.5);
	// append_lista_dupla(lista, 18, 5, 2018, 18, 49, 1.6);
	// append_lista_dupla(lista, 18, 5, 2018, 22, 15, 0.6);
	// append_lista_dupla(lista, 19, 5, 2018, 1, 15, 1.2);
	// append_lista_dupla(lista, 19, 5, 2018, 4, 17, 0.7);
	// append_lista_dupla(lista, 19, 5, 2018, 07, 8, 1.1);
	// append_lista_dupla(lista, 19, 5, 2018, 10, 43, 0.4);
	// append_lista_dupla(lista, 19, 5, 2018, 13, 28, 0.7);
	// append_lista_dupla(lista, 19, 5, 2018, 15, 54, 0.5);
	// append_lista_dupla(lista, 19, 5, 2018, 19, 39, 1.5);
	// append_lista_dupla(lista, 19, 5, 2018, 22, 58, 0.7);
	// append_lista_dupla(lista, 20, 5, 2018, 2, 0, 1.3);
	// append_lista_dupla(lista, 20, 5, 2018, 5, 15, 0.6);
	// append_lista_dupla(lista, 20, 5, 2018, 8, 17, 1.0);
	// append_lista_dupla(lista, 20, 5, 2018, 11, 43, 0.5);
	// append_lista_dupla(lista, 20, 5, 2018, 14, 9, 0.7);
	// append_lista_dupla(lista, 20, 5, 2018, 16, 51, 0.5);
	// append_lista_dupla(lista, 20, 5, 2018, 20, 38, 1.3);
	// append_lista_dupla(lista, 20, 5, 2018, 23, 47, 0.8);
	// append_lista_dupla(lista, 21, 5, 2018, 2, 39, 1.2);
	// append_lista_dupla(lista, 21, 5, 2018, 6, 6, 0.5);
	// append_lista_dupla(lista, 21, 5, 2018, 9, 21, 1.1);
	// append_lista_dupla(lista, 21, 5, 2018, 12, 51, 0.6);
	// append_lista_dupla(lista, 21, 5, 2018, 15, 0, 0.7);
	// append_lista_dupla(lista, 21, 5, 2018, 17, 49, 0.5);
	// append_lista_dupla(lista, 21, 5, 2018, 21, 47, 1.3);
	// append_lista_dupla(lista, 22, 5, 2018, 0, 51, 0.9);
	// append_lista_dupla(lista, 22, 5, 2018, 3, 9, 1.1);
	// append_lista_dupla(lista, 22, 5, 2018, 6, 51, 0.5);
	// append_lista_dupla(lista, 22, 5, 2018, 10, 17, 1.2);
	// append_lista_dupla(lista, 22, 5, 2018, 14, 0, 0.6);
	// append_lista_dupla(lista, 22, 5, 2018, 15, 54, 0.7);
	// append_lista_dupla(lista, 22, 5, 2018, 18, 49, 0.5);
	// append_lista_dupla(lista, 22, 5, 2018, 23, 6, 1.3);
	// append_lista_dupla(lista, 23, 5, 2018, 07, 15, 0.6);
	// append_lista_dupla(lista, 23, 5, 2018, 11, 9, 1.3);
	// append_lista_dupla(lista, 23, 5, 2018, 15, 6, 0.6);
	// append_lista_dupla(lista, 23, 5, 2018, 16, 54, 0.7);
	// append_lista_dupla(lista, 23, 5, 2018, 19, 51, 0.5);
}
