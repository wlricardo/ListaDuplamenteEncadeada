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
    int opp, ops;

    lst = Criar_Lista();

    Menu_Principal();
    scanf("%d", &opp);
    fflush(stdin);

    do
    {
        switch (opp)
        {
        case 1:
            Menu_Inserir();
            scanf("%d", &ops);
            fflush(stdin);

            printf("\n Elemento a ser inserido: ");
            scanf("%d", &numero);
            fflush(stdin);

            switch (ops)
            {
            case 1:
                lst = Inserir_Elemento_No_Inicio(lst, numero);
                Imprimir_Lista(lst);
                break;
            case 2:
                lst = Inserir_Elemento_No_Final(lst, numero);
                Imprimir_Lista(lst);
                break;
            default:
                printf("\n Opcao invalida");
                break;
            }
            break;
        default:
            break;
        }
    } while (opp != 0);

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
