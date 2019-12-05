#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <time.h>

#define BAG_VALUE 20
#define ITEM_VALUE 6


int main()
{
    int *valor = malloc(ITEM_VALUE*sizeof(int)); //valores em dinheiro dos objetos
    int *peso = malloc(ITEM_VALUE*sizeof(int));//peso em kg dos objetos
    srand(time(NULL));

    for(int i=0; i<=ITEM_VALUE; i++)
    {
        int a = rand()%10;
        peso[i] = a;
    }

    for(int i=0; i<=ITEM_VALUE; i++)
    {
        int a = rand()%10;
        valor[i] = a;
    }

    mostra_peso(peso);
    mostra_valor(valor);
}
