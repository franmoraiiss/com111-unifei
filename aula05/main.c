#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int criarDado(int *dado);

//lista estatica

int main(){

    Lista *li = NULL;
    int r;

    int ok, dado, pos;

    do {

        printf("----Menu----\n");
        printf("1 - criar\n");
        printf("2 - liberar\n");
        printf("3 - quantidade\n");
        printf("4 - ins inicio\n");
        printf("5 - ins final\n");
        printf("6 - rem inicio\n");
        printf("7 - rem final\n");
        printf("8 - imprimir\n");
        printf("9 - rem especifico\n");
        printf("10 - ins ordenada\n");
        printf("11 - busca posicao\n");
        printf("12 - busca elemento\n");

        scanf("%d", &r);

        switch (r) {
            case 1:
                li = criarLista();

                if(li != NULL){
                    printf("\nCreated\n\n");
                } else {
                    printf("\nerror\n\n");
                }

                break;

            case 2:
                ok = liberarLista(li);
                
                if(ok == 1){
                    printf("\nClear\n\n");
                } else {
                    printf("\nerror\n\n");
                }

                break;

            case 3:
                printf("\n%d\n\n", tamanhoLista(li));
                break;

            case 4:

                ok = criarDado(&dado);
                ok = inserirInicio(li, dado);

                if(ok == 1){
                    printf("\n OK \n\n");
                } else {
                    printf("\nerror\n\n");
                }
                break;

            case 5:
                ok = criarDado(&dado);
                ok = inserirFinal(li, dado);

                if(ok == 1){
                    printf("\n OK \n\n");
                } else {
                    printf("\nerror\n\n");
                }
                break;

            case 6:
                ok = removerInicio(li);

                if(ok == 1){
                    printf("\n OK \n\n");
                } else {
                    printf("\nerror\n\n");
                }
                break;

            case 7:
                ok = removerFinal(li);

                if(ok == 1){
                    printf("\n OK \n\n");
                } else {
                    printf("\nerror\n\n");
                }
                break;

            case 8:
                imprimirLista(li);
                break;
            
            case 9:
                printf("\n > Dado:");
                scanf("%d", &dado);

                ok = removerEspecifico(li, dado);

                if(ok == 1){
                    printf("\n OK \n\n");
                } else {
                    printf("\nerror\n\n");
                }

                break;
            
            case 10:
                ok = criarDado(&dado);
                ok = inserirOrdenada(li, dado);

                if(ok == 1){
                    printf("\n OK \n\n");
                } else {
                    printf("\nerror\n\n");
                }

                break;

            case 11:
                printf(" > pos:");
                scanf("%d", &pos);

                ok = buscaPosicao(li, pos, &dado);

                if(ok){
                    printf("\nOK\n\n");
                    printf("\nElemento pos %d >", pos);
                    printf("%d\n", dado);
                } else {
                    printf("> pos inexistente\n");
                }

                break;

            case 12:
                printf(" > dado: ");
                scanf("%d", &dado);

                ok = buscaDado(li, dado, &pos);

                if(ok) {
                    printf("\nOK\n\n");
                    printf("Dado: %d, pos > %d\n", dado, pos);
                } else {
                    printf("> dado inexistente\n");
                }
                break;

            case 0:
                liberarLista(li);
                printf("\nFinalizando...");
                break;

            default:
                printf("error\n\n");
            }

    } while(r != 0);

}

int criarDado(int *dado){
    printf("\nValor > ");
    scanf("%d", dado);

    return 1;
}