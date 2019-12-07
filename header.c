#include "header.h"
#include <stdlib.h>
#define BAG_VALUE 20
#define ITEM_VALUE 9



void mochila(int valor)
{
    for(int i=1; i<=valor; i++)
    {
        printf("%c", 178);
    }
}

int* preenche_peso(int *peso)
{
    /*PREENCHENDO O PONTEIRO/VETOR PESO*/
    for(int i=0; i<=ITEM_VALUE; i++)
    {
        int a = rand()%10+1;
        peso[i] = a;
    }
    return peso;
}

int* preenche_valor(int *valor)
{
    for(int i=0; i<=ITEM_VALUE; i++)
    {
        int a = rand()%10+1;
        valor[i] = a;
    }
    return valor;
}

int* remove_peso(int *peso, int obj)
{
    int i=0;
    int *aux = malloc(sizeof(int));
    aux = peso[obj-1];
    for(i=obj-1; i<=ITEM_VALUE; i++)
    {
        peso[i] = peso[i++];
    }
    peso[i] = aux;
    peso = realloc(peso, i*sizeof(int));
    return peso;
}

int* remove_valor(int *valor, int obj)
{
    int i=0;
    int *aux = malloc(sizeof(int));
    aux = valor[obj-1];
    for(i=obj-1; i<=ITEM_VALUE; i++)
    {
        valor[i] = valor[i++];
    }
    valor[i] = aux;
    valor = realloc(valor, i*sizeof(int));
    return valor;
}

int verifica(int itens[], int obj)
{
    for(int i=0; i < ITEM_VALUE; i++)
    {
        if(itens[i] == obj)
        {
            return 1;
        }
    }
    return 0;
}

void printa(int itens[])
{
    printf("Vetor: \n");
    for(int i=0; i <= ITEM_VALUE; i++)
    {
        printf("%d\n", itens[i]);
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

void mostra_capacidade()
{
    printf("Capacidade da mochila: %d\n", BAG_VALUE);
}

void mostra_obj()
{
    printf("OBJET: ");
    for(int i=0; i<=ITEM_VALUE; i++)
    {
        printf("%d\t", i+1);
    }
    printf("\n");
}

void mostra_mochila(int bag, int value)
{
    printf("sua mochila pesa: %d/%d e vale: %d\n", bag, BAG_VALUE, value);
}

void menu()
{
    printf("1 - Jogar\n");
    printf("Aperte qualquer tecla para sair\n");
}
