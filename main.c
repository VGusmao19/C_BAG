#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <time.h>
#define BAG_VALUE 20
#define ITEM_VALUE 9
#define TRUE 1
#define FALSE 0


int main()
{
    srand(time(NULL)); /*comando para gerar valores aleatórios diferentes*/
    int *valor = malloc(ITEM_VALUE*sizeof(int)); //valores em dinheiro dos objetos
    int *peso = malloc(ITEM_VALUE*sizeof(int));//peso em kg dos objetos
    int jogar = TRUE;
    int opcao = 0;
    int obj;//essa variável irá guardar o objeto escolhido
    int mochila_peso = 0;//essa variavel representara o peso mochila do jogador
    int mochila_valor = 0;//essa variavel representara o valor mochila do jogador
    int itens[ITEM_VALUE];
    int recebe_retorno;
    int aux=0; /*sera incrementada cada vez que um item entrar na mochila*/


    //preenchendo os objetos que entrarão na mochila
    preenche_peso(peso);
    preenche_valor(valor);

    /*LOOP princiapl do jogo*/
    while(jogar == TRUE)
    {
        menu();
        scanf("%d", &opcao);
        if(opcao == 1)
        {
            while(mochila_peso < BAG_VALUE)
            {
                mostra_capacidade();
                mostra_mochila(mochila_peso, mochila_valor);
                mostra_obj();
                mostra_peso(peso);
                mostra_valor(valor);
                /*
                printa(itens);//serve para printar o vetor que armazena os itens q ja escolhi
                */
                printf("Escolha o numero do OBJET para colocar na mochila:");
                scanf("%d", &obj);
                recebe_retorno = verifica(itens, obj);
                if(recebe_retorno == 0)
                {
                    itens[aux] = obj;
                    mochila_peso = mochila_peso + peso[obj-1];
                    mochila_valor = mochila_valor + valor[obj-1];
                    printf("Objeto foi colocado na mochila\n");
                    aux++;
                }else
                {
                    printf("voce ja escolheu esse objeto. Por favor escolha outro:\n");
                }
            }
            if(mochila_peso == 20)
            {
                jogar = FALSE;
                printf("Parabens! Voce usou completamente o espaco da mochila!");
                printf("Capacidade: %d/%d. Valor da mochila: %d\n", mochila_peso, BAG_VALUE, mochila_valor);

            }
        }else
        {
            jogar = FALSE;
        }
    }
    printf("OBRIGADO POR JOGAR!\n");
    return 0;
}
