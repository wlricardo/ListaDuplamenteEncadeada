#include <stdio.h>
#include <stdlib.h>
#include "listaduplamenteencadeada.h"

int main(int argc, char const *argv[])
{
    system("cls");

    int numero;
    LISTA *lst;

    lst = Criar_Lista();
    Imprimir_Lista(lst);
    lst = Inserir_Elemento_No_Inicio(lst, 3);
    Imprimir_Lista(lst);
    lst = Inserir_Elemento_No_Inicio(lst, 4);
    Imprimir_Lista(lst);
    lst = Inserir_Elemento_No_Final(lst, 9);
    Imprimir_Lista(lst);
    lst = Inserir_Elemento_No_Final(lst, 0);
    Imprimir_Lista(lst);

    return 0;
}
