#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

void carrinho_calcularNovaPosicao(Carrinho* c, int tempo){
    int novo = c->x + (c->y * tempo);
    c->x = novo;
}

void carrinho_acelerar(Carrinho* c){
    c->y += 1;
}

void carrinho_freiar(Carrinho *c){
    c->y -= 1;
}

void destrua(Carrinho *c){
    free(c);
}

Carrinho criar(int t, int v){
    Carrinho *c = malloc(sizeof(Carrinho));
    c->x = t;
    c->y = v;
    return c;

}


////////////////////////////////////
///////////////////////////////////////
/////////////////////////////////////


float livros_calcularDesconto(Livraria livro, float desc){
    if (desc < 0.95 &&  desc > 0.05){
        float aux =  livro.preco - (livro.preco * desc);
        printf("preco com desconto: %.2f", aux);
    } else
    printf("Desconto invalido ");
    }
}

float livros_precoLeveTresPagueDois(Livraria livro, Livraria livro2, Livraria livro3){
    float badalo;
    if (livro.preco >= livro2.preco && livro.preco >= livro3.preco){
        if(livro2.preco >= livro3.preco){
            badalo = livro2.preco + livro.preco;
        } else {
            badalo = livro.preco + livro3.preco;
        }
    }  else if(livro2.preco >= livro.preco && livro2.preco >= livro3.preco) {
        if(livro.preco >= livro3.preco){
            badalo = livro2.preco + livro.preco;
        } else {
            badalo = livro2.preco + livro3.preco;
        }
    }  else if(livro3.preco >= livro.preco && livro3.preco >= livro2.preco) {
        if(livro2.preco >= livro.preco){
            badalo = livro3.preco + livro2.preco;
        } else {
            badalo = livro3.preco + livro.preco;
        }
    }
    printf("valor de livros com desc: %f", badalo);
}
void livros_verlivro(Livraria livro){
    printf("Nome do livro: %s\nNome do autor(a): %s\nGenero: %s\nPreco: %d\n",livro.titulo, livro.nome, livro.genero, livro.preco);
}
void destrua(Livraria *c){
    free(c);
}

///////////////////////
//////////////////////
//////////////////////

Brotinho pizzaria_criarBrotinho(char a[10]){
	Brotinho u;
	strcpy(u.sabor,a);
	return u;
}

Media pizzaria_criarmedia(char a[10], char b[10]){
	Media u;
	strcpy(u.sabor1,a);
	strcpy(u.sabor2,b);
	return u;
}

Grande pizzaria_criargrande(char a[10], char b[10], char c[10], char d[10]){
	Grande u;
	strcpy(u.sabor1,a);
	strcpy(u.sabor2,b);
	strcpy(u.sabor3,c);
	strcpy(u.sabor4,d);
	return u;
}

void destruir_brotinho(Brotinho *a){
	free(a);
}

void destruir_media(Media *a){
	free(a);
}

void destruir_Grande(Grande *a){
	free(a);
}

////////////////////////////
////////////////////////////
/////////////////////////////

float pontos_calculardistancia(Ponto *a, Ponto *b){
	int dist = 0;
	dist = sqrt(pow((b->x - a->x),2) + pow((b->y - a->y),2));
	return dist;
}
Ponto pontos_calcularPontoMedio(Ponto *a, Ponto *b){
	int x_m, y_m;
	Ponto M;
	x_m = (a->x + b->x)/2;
	y_m = (a->y + b->y)/2;
	M.x = x_m;
	M.y = y_m;

	return M;
}

Ponto pontos_Calcularbaricentro(Ponto *a, Ponto *b, Ponto *c){
	Ponto bar;
	bar.x = (a->x + b->x + c->x)/3;
	bar.y = (a->y + b->y + c->y)/3;

	return bar;
}
void destruirPonto(Ponto *a){
	free(a);
}
