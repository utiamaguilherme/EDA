#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
	Implemente a função verificarSeTemNetasOuNetos
	para que ela funcione corretamente. Ao passar como
	argumento uma struct do tipo Pessoa, deve-se imprimir na
	tela se ela tem ou não netas ou netos.


	simbolos associados: (-> . struct strcpy)
*/

typedef struct pessoa{
	char nome[50];
	struct pessoa* filho;

} Pessoa;

void verificarSeTemNetasOuNetos(Pessoa p){
	printf("%s não tem netas ou netos\n",p.nome);
}

int main(){
	
	Pessoa p1;
	strcpy(p1.nome, "Eddard Stark");
	p1.filho = NULL;
	
	Pessoa p2;
	strcpy(p2.nome, "Arya Stark");
	p2.filho = NULL;

	Pessoa p3;
	strcpy(p3.nome, "Rickard Stark");
	p3.filho = NULL;
	
	Pessoa p4;
	strcpy(p4.nome, "Tony Stark");
	p4.filho = NULL;

	Pessoa p5;
	strcpy(p5.nome, "Howard Stark");
	p5.filho = NULL;

	Pessoa p6;
	strcpy(p6.nome, "Edwyle Stark");
	p5.filho = NULL;

	p3.filho = &p1;
	p1.filho = &p2;
	p5.filho = &p4;
	p6.filho = &p3;

	int tamanho = 6;
	Pessoa pessoas[tamanho];
	pessoas[0] = p1;
	pessoas[1] = p2;
	pessoas[2] = p3;
	pessoas[3] = p4;
	pessoas[4] = p5;
	pessoas[5] = p6;

	printf("03\n");

	for(int i = 0;i<tamanho;i++){
		verificarSeTemNetasOuNetos(pessoas[i]);
	}

	return 0;
}