#include "header.h"

#define BAG_VALUE 20
#define ITEM_VALUE 6



void mochila(int valor)
{
    for(int i=1; i<=valor; i++)
    {
        printf("%c", 178);
    }
}

void mostra_peso(int *peso)
{
    printf("PESOS: ");
    for(int i=0; i<=ITEM_VALUE; i++)
    {
        printf("%d\t", peso[i]);
    }
    printf("\n");
}

void mostra_valor(int *valor)
{
    printf("VALOR: ");
    for(int i=0; i<=ITEM_VALUE; i++)
    {
        printf("%d\t", valor[i]);
    }
    printf("\n");
}
