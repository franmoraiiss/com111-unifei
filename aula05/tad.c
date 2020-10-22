#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

#define MAX 100

struct lista {
    int qtd;
    int dados[MAX];
};

Lista* criarLista() {

    Lista *li = (Lista*) malloc(sizeof(Lista));

    if(li != NULL){
        li->qtd = 0;
    }

    return li;
} 

int liberarLista(Lista *li){
    if(li == NULL){
        return 0;
    }

    free(li);

    return 1;
}

int tamanhoLista(Lista *li) {
    if(li == NULL) {
        return -1;
    } else {
        return li->qtd;
    }
}

int vaziaLista(Lista *li) {
    if(li == NULL){
        return -1;
    }

    if(li->qtd == 0){
        return 1;
    }

    //se houver elementos
    return 0;
}

int cheiaLista(Lista *li){
    if(li == NULL){
        return -1;
    }

    if(li->qtd == MAX){
        return 1;
    }

    //caso não cheia
    return 0;
}

int inserirInicio(Lista *li, int dado) {

    if(li == NULL){
        return 0;
    }

    if(cheiaLista(li) == 1){
        return 0;
    }

    for(int i = li->qtd-1; i >= 0; i--){
        li->dados[i+1] = li->dados[i];
    }

    li->dados[0] = dado;
    li->qtd++;

    return 1;
}

int inserirFinal(Lista *li, int dado){

    if(li == NULL){
        return 0;
    }

    if(cheiaLista(li) == 1){
        return 0;
    }

    li->dados[li->qtd] = dado;
    li->qtd++;

    return 1; 

}

int inserirOrdenada(Lista *li, int dado) {
    
    if(li == NULL) {
        return 0;
    }

    if(cheiaLista(li) == 1) {
        return 0;
    }

    int i = 0;
    while(i < li->qtd && li->dados[i] < dado) {
        i++;
    }

    for(int k = li->qtd-1; k >= i; k--){
        li->dados[k+1] = li->dados[k];
    }

    li->dados[i] = dado;
    li->qtd++;

    return 1;

}

int removerInicio(Lista *li) {

    if(li == NULL){
        return 0;
    }

    if(vaziaLista(li) == 1){
        return 0;
    }

    for(int k=0; k < li->qtd-1; k++){
        li->dados[k] = li->dados[k+1];
    }

    li->qtd--;

    return 1;
}

int removerFinal(Lista *li){
    
    if(li == NULL){
        return 0;
    }

    if(vaziaLista(li) == 1){
        return 0;
    }

    li->qtd--;

    return 1;
}

int removerEspecifico(Lista *li, int dado) {
    if(li == NULL){
        return 0;
    }

    if(vaziaLista(li) == 1){
        return 0;
    }

    int i = 0;
    while(i < li->qtd && li->dados[i] != dado){
        i++;
    }

    //elemento não existe
    if(i == li->qtd) {
        return 0;
    }

    for(int k = i; k<=li->qtd-1; k++) {
        li->dados[k] = li->dados[k+1];
    }

    li->qtd--;

    return 1;

}

int imprimirLista(Lista *li) { 

     if(li == NULL){
        return 0;
    }

    for(int i = 0; i<li->qtd; i++){
        printf("%d ", li->dados[i]);
    }

    return 1;

}

int buscaPosicao(Lista *li, int pos, int *dado){
    if(li == NULL || pos <=0 || pos > li->qtd){
        return 0;
    }

    *dado = li->dados[pos-1];

    return 1;
}

int buscaDado(Lista *li, int dado, int *pos) {
    if(li == NULL){
        return 0;
    }

    int i = 0;
    while(i < li->qtd && li->dados[i] != dado){
        i++;
    }

    if(i == li->qtd) {
        return 0;
    }

    *pos = i+1;

    return 1;
}
