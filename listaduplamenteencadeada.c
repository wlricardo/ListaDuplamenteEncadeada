#include <stdio.h>
#include <stdlib.h>
#include "listaduplamenteencadeada.h"

//*****************************************************************//
//                         FUNÇÕES                                 //
//*****************************************************************//

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

    novo->Dado = valor;
    novo->Anterior = l;
    novo->Proximo = NULL;
}

void Imprimir_Lista(LISTA *l)
{
    LISTA *aux;

    printf("\n Lista :");
    for (aux = l; aux != NULL; aux = aux->Proximo)
    {
        printf(" %2d", aux->Dado);
    }
}