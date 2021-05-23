/*
** TIPOS DE DADOS CRIADOS PELO USUÁRIO
*/

// Tipo LISTA
// Este tipo cria um elemento de lista que poderá ser encadeado tanto
// para o elemento anterior quanto para o posterios, ou seja, é
// duplamente encadeado. Ele recebe um valor do tipo inteiro.
typedef struct LISTA
{
    int Dado;
    struct LISTA *Anterior;
    struct LISTA *Proximo;
} LISTA;

/*
** FUNÇÕES AUXILIARES
*/

// Função Criar_Lista
// Cria uma lista vazia
LISTA *Criar_Lista();

// Função Inserir_Elemento_No_Inicio
// Recebe como parâmetros uma lista e um valor ser inserido
// e no início da lista, e retorna essa lista com o novo valor
LISTA *Inserir_Elemento_No_Inicio(LISTA *l, int valor);

// Função Inserir_Elemento_No_Final
// Recebe como parâmetros uma lista e um valor ser inserido
// e no final da lista, e retorna essa lista com o novo valor
LISTA *Inserir_Elemento_No_Final(LISTA *l, int valor);

// Função Imprimir_Lista
// Recebe uma lista como parâmetro e imprime todos os dados
// armazenados.
void Imprimir_Lista(LISTA *l);

