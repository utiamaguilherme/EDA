// #include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "bib.h"


int main(void){
    int x,y;
    printf("Digite a posicao e a velocidade do carrinho\n");
    scanf("%d %d", &x, &y);
    printf("Criando carrinho...\n");
    criar(x,y);

    return 0;
}
