#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
	int a;
	struct XAMPS *ptr;
}XAMPS;

int main(void) {
	int tam = 0;
	XAMPS *PILHA,*p2;
	PILHA =malloc(sizeof(XAMPS));
	p2 =malloc(sizeof(XAMPS));
		PILHA->ptr = NULL;
		PILHA->a = 5;
		p2->ptr = PILHA;
		p2->a = 10;
        printf("%d %d\n",PILHA->a, p2->a);



return 0;
}
