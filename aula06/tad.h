#ifndef _LISTA_ENCADEADA
#define _LISTA_ENCADEADA

typedef struct elemento *Lista;

struct elemento {
    int dado;
    struct elemento *prox;
};

typedef struct elemento Elemento;

Lista* criarLista();
int liberarLista(Lista *li);

Elemento *criarElemento();
int inserirInicio(Lista *li, int dado);


#endif
