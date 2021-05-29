#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "listaduplamenteencadeada.h"

int main(int argc, char const *argv[])
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int numero;
    LISTA *lst;
    int op;

    lst = Criar_Lista();

    do
    {
        system("cls");
        Imprimir_Lista(lst);
        Menu_Principal();
        scanf("%d", &op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\n Elemento a ser inserido: ");
            scanf("%d", &numero);
            fflush(stdin);
            lst = Inserir_Elemento_No_Inicio(lst, numero);
            break;
        case 2:
            printf("\n Elemento a ser inserido: ");
            scanf("%d", &numero);
            fflush(stdin);
            lst = Inserir_Elemento_No_Final(lst, numero);
            break;
        default:
            if (op < 0 || op > 4)
            {
                printf("\n Opcao invalida...");
            }

            break;
        }
    } while (op != 0);

    /*lst = Criar_Lista();
    Imprimir_Lista(lst);

    lst = Inserir_Elemento_No_Final(lst, 7);
    Imprimir_Lista(lst);
    lst = Inserir_Elemento_No_Final(lst, 2);
    Imprimir_Lista(lst);
    lst = Inserir_Elemento_No_Inicio(lst, 1);
    Imprimir_Lista(lst);
    lst = Inserir_Elemento_No_Inicio(lst, 4);
    Imprimir_Lista(lst);
    lst = Inserir_Elemento_No_Final(lst, 3);
    Imprimir_Lista(lst);*/

    printf("\n\n");
    return 0;
}
