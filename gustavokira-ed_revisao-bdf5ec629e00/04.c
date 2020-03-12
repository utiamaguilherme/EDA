#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
	Complete o programa a seguir de acordo com as instruções
	abaixo:

	1) Crie uma função que verifica se um carro está cheio.

	2) Crie uma função que verifica se o motorista do carro tem habilitação.

	3) Crie uma função que cria um carro

	4) Crie uma função que coloque uma pessoa no carro, 
	respeitando o limite de passageiros e a necessidade de motorista.
	Ex: se o carro não tiver motorista e a pessoa a ser colocada pode dirigir,
	ela deve ser colocada como motorista. Se o carro estiver cheio, a pessoa não deve
	ser colocada.

	5) crie exemplos para provar que as suas funções funcionam de acordo com a
	especificação

*/

typedef struct pessoa{
	char nome[20];
	int temHabilitacao; //0 não tem; 1 tem.
} Pessoa;

typedef struct carro{
	Pessoa* motorista;
	Pessoa* passageiros[4];
} Carro;

int main(){
	printf("04\n");

	return 0;
}