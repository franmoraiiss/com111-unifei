#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

Lista* criarLista(){

    Lista *li = (Lista*) malloc(sizeof(Lista));

    if(li != NULL){
        *li = NULL;
    }

    return li;
}

int liberarLista(Lista *li) {

    if(li == NULL){
        return 0;
    }

    Elemento *no;
    while(*li != NULL){
        no = *li;
        *li = (*li)->prox;
        free(no);
    }

    free(li);

    return 1;
}

Elemento* criarElemento(){
    Elemento *no = (Elemento*) malloc(sizeof(Elemento));

    return no;
}

int inserirInicio(Lista *li, int dado) {

    if(li == NULL){
        return 0;
    }

    Elemento *no;
    no = criarElemento();

    if(no == NULL) {
        return 0;
    }

    no->dado = dado;
    no->prox = (*li);

    *li = no;

    return 1;
}