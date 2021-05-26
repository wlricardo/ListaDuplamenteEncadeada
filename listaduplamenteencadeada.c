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

    printf("\n Lista :");
    for (aux = l; aux != NULL; aux = aux->Proximo)
    {
        printf("%2d", aux->Dado);
    }
    printf("\n\n");
    system("pause");
}

//*****************************************************************
//                         FUNÇÕES AUXLIARES
//*****************************************************************

/* Exibe um menu de opções */
void Menu_Principal() {
    system("cls");
    printf("\n +++ LISTA DUPLAMENTE ENCADEADA +++");
    printf("\n\n\n Selecione uma opcao: ");
    printf("\n [1] Inserir elemento");
    printf("\n [2] Remover elmento");
    printf("\n [0] Sair do programa\n >> ");
}

// Menu da opção Inserir */
void Menu_Inserir() {
    system("cls");
    printf("\n --- Menu Inserir ---");
    printf("\n [1] Inserir no inicio da lista");
    printf("\n [2] Inserir no final da lista\n >> ");
}