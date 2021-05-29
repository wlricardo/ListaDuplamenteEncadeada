#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "listaduplamenteencadeada.h"

//*****************************************************************
//                         FUNÇÕES PRINCIPAIS
//*****************************************************************

/* Criar lista vazia */
LISTA *Criar_Lista()
{
    return NULL;
}

/* Inserir elemento no início da lista */
LISTA *Inserir_Elemento_No_Inicio(LISTA *l, int valor)
{
    LISTA *novo = (LISTA *)malloc(sizeof(LISTA));

    novo->Dado = valor;
    novo->Anterior = NULL;
    novo->Proximo = l;
    if (l != NULL)
    {
        l->Anterior = novo;
    }
    return novo;
}

/* Inserir elemento no final da lista*/
LISTA *Inserir_Elemento_No_Final(LISTA *l, int valor)
{
    LISTA *novo = (LISTA *)malloc(sizeof(LISTA));
    LISTA *aux;

    if (l == NULL)
    {
        l = Inserir_Elemento_No_Inicio(l, valor);
    }
    else
    {
        novo->Dado = valor;
        novo->Proximo = NULL;

        aux = l;
        while (aux->Proximo != NULL)
        {
            aux = aux->Proximo;
        }
        novo->Dado = valor;
        novo->Proximo = NULL;
        aux->Proximo = novo;
        novo->Anterior = aux;
    }

    return l;
}

/* Mostrar na tela todas os elementos da lista */
void Imprimir_Lista(LISTA *l)
{
    LISTA *aux;

    printf("\n*********************************************\n");
    printf("\n Lista :");
    for (aux = l; aux != NULL; aux = aux->Proximo)
    {
        printf("%2d", aux->Dado);
    }
    printf("\n\n*********************************************\n");
    printf("\n");
    fflush(stdin);
}

//*****************************************************************
//                         FUNÇÕES AUXLIARES
//*****************************************************************

/* Exibe um menu de opções */
void Menu_Principal()
{    
    printf("\n +++ LISTA DUPLAMENTE ENCADEADA +++");
    printf("\n\n\n Selecione uma opcao: ");
    printf("\n [1] Inserir elemento no inicio");
    printf("\n [2] Inserir elemento no final");
    printf("\n [3] Remover elmento do inicio");
    printf("\n [4] Remover elmento do final");
    printf("\n [0] Sair do programa\n >> ");
}

