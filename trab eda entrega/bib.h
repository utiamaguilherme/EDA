#ifndef BIB_H
#define BIB_H

void carrinho_calcularNovaPosicao(Carrinho* c, int tempo);
void carrinho_acelerar(Carrinho* c);
void carrinho_freiar(Carrinho *c);
void destrua(Carrinho *c);

Carrinho criar(int t, int v);
typedef struct{
    int x;
    int y;
} Carrinho;

/////////////////////
/////////////////////
/////////////////////

float livros_calcularDesconto(Livraria livro, float desc);
float livros_precoLeveTresPagueDois(Livraria livro, Livraria livro2, Livraria livro3);
void livros_verlivro(Livraria livro);
void destrua(Livraria *c);

typedef struct{
    char titulo[20];
    char nome[15];
    int preco;
    char genero[15];
} Livraria;


/////////////
/////////////
/////////////

Brotinho pizzaria_criarBrotinho(char a[10]);
Media pizzaria_criarmedia(char a[10], char b[10]);
Grande pizzaria_criargrande(char a[10], char b[10], char c[10], char d[10]);
void destruir_brotinho(Brotinho *a);
void destruir_media(Media *a);
void destruir_Grande(Grande *a);

typedef struct b{
	char sabor[10];
	int pedacos[3];
}Brotinho;

typedef struct m{
	char sabor1[10];
	char sabor2[10];
	int pedacos[5];
}Media;

typedef struct g{
	char sabor1[10];
	char sabor2[10];
	char sabor3[10];
	char sabor4[10];
	int pedacos[7];
}Grande;

///////////////////////////
////////////////////////
/////////////////////////

typedef struct P{
	float x;
	float y;
}Ponto;

float calculardistancia(Ponto *a, Ponto *b);
Ponto pontos_calcularPontoMedio(Ponto *a, Ponto *b);
Ponto pontos_Calcularbaricentro(Ponto *a, Ponto *b, Ponto *c);
void destruirPonto(Ponto *a);

#endif
