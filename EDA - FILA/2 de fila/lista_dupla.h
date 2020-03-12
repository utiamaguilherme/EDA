
typedef struct l_d
{
	struct n_d* primeiro;
	struct n_d* ultimo;
} lista_dupla;

lista_dupla* criar_lista_dupla();

void append_lista_dupla(lista_dupla* lista,int dia, int mes, int ano, int hora, int min, float altura);

int size_lista_dupla(lista_dupla* lista);

float busca(lista_dupla* lista, int dia, int mes, int ano, int hora);

float buscar_altura_por_dia_mes_ano_hora(lista_dupla* lista, int dia, int mes, int ano, int hora);

void preppend_lista_dupla(lista_dupla* lista,int dia, int mes, int ano, int hora, int min, float altura);
