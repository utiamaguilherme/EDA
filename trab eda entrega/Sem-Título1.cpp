#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "bib.h"

typedef struct P{
	float x;
	float y;
}Ponto;


int main(void){

	Ponto f,g, h, aux, *a;
	aux = pontos_Calcularbaricentro(&f, &g, &h);

	printf("Informe as cordenadas de tres pontos\n");
	scanf("%f %f %f %f", &f.x, &f.y, &g.x ,&g.y, &h.x, &h.y);
	printf("Distancia entre os pontos f e g eh: %.2f\n", pontos_calculardistancia(&f, &g));
	printf("Ponto medio entre os pontos f e g eh: %.2f\n", pontos_calcularPontoMedio(&f, &g));
	printf("Baricentro dos 3 pontos eh: %.2f\n",pontos_Calcularbaricentro(&f, &g, &h));
	printf("Baricentro entre 2 pontos e um baricentro: %.2f\n",pontos_Calcularbaricentro(Ponto &f, Ponto &g, Ponto &aux));
	destruirPonto(Ponto *a);

	return 0;
}
