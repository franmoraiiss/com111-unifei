#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int criarDado(int *dado);

int main() {

    Lista *li = NULL;
    int opcao, dado, ok, pos;

    do{
        printf("\n\nMenu de opções");
        printf("\n1 - Criar lista");
        printf("\n2 - Liberar lista");
        printf("\n3 - Inserir elemento no início");
        printf("\n4 - Inserir elemento no final");
        printf("\n5 - Inserir elemento (ordenado)");
        printf("\n6 - Remover elemento do início");
        printf("\n7 - Remover elemento do final");
        printf("\n8 - Remover elemento (qualquer)");
        printf("\n9 - Buscar elemento pela posição");
        printf("\n10 - Buscar elemento pelo dado");
        printf("\n11 - Imprimir lista");
        printf("\n12 - Sair");
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            
            case 1:
                li = criarLista();
                if(li != NULL) {
                    printf("\nOK\n\n");
                } else {
                    printf("\nerror\n\n");
                }
                break;

            case 2:
                break;

            case 3:
                ok = criarDado(&dado);
                ok = inserirInicio(li, dado);

                if(ok == 1){
                    printf("\nOK\n\n");
                } else {
                    printf("\nerror\n\n");
                }

                break;

            default:
                printf("\nerror\n\n");
                break;
        }
    } while(opcao  != 0);

    return 0;
}

int criarDado(int *dado){
    printf("\n dado > ");
    scanf("%d", dado);

    return 1;
}