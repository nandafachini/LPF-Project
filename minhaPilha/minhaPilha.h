#include <stdio.h>
#include <stdlib.h>

#ifndef minhaPilha
#define minhaPilha

#define TAM 20
#define Max 20

typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct{
    No *topo;
    int tam;
}Pilha;

// operação push
void empilhar(Pilha *p, int x){
    No *no = malloc(sizeof(No));
    no->valor = x;
    no->proximo = p->topo;
    p->topo = no;
}

/*  operação pop
    retorna o topo da pilha ou NULL
*/
No* desempilhar(Pilha *p){
    No *no = NULL;
    if(p->topo){
        no = p->topo;
        p->topo = no->proximo;
    }
    return no;
}

void imprimir(No *no){
    if(no){
        printf("%d\n", no->valor);
        imprimir(no->proximo);
    }
}


#endif