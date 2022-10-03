#include <stdio.h>
#include <stdlib.h>

#include "minhaPilha.h"

int main() {
    int op, valor;
    No *no;
    Pilha p;
    p.tam = 0;
    p.topo = NULL;

    do{
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &op);

        switch(op){
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            printf("Valor a ser empilhado: ");
            scanf("%d", &valor);
            empilhar(&p, valor);
            break;
        case 2:
            no = desempilhar(&p);
            if(no){
                printf("\tDesemplilhado: %d\n", no->valor);
            }
            break;
        case 3:
            printf("\n-------- PILHA --------\n");
            imprimir(p.topo);
            printf("-------- PILHA --------\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }

    }while(op != 0);
    return 0;
}