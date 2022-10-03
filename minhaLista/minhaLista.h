#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// #ifndef minhaLista
// #define minhaLista

// struct Nodo {

// 	int info;
// 	struct Nodo *prox;

// };

// struct ListaSimplesEnc {

// 	struct Nodo *prim;

// };

// void criarLista (struct ListaSimplesEnc *pList) {

// 	pList -> prim = NULL;
    

// }

// void mostrarLista (struct ListaSimplesEnc *pList){

// 	struct Nodo *p;

// 	for (p = pList -> prim; p != NULL; p = p->prox) {

// 		printf("%d\t", p->info);

// 	}

// 	printf("\n");

// }

// void inserirIni (struct ListaSimplesEnc *pList, int v){
// 	struct Nodo *novo;
// 	novo = (struct Nodo*) malloc (sizeof (struct Nodo));
// 	novo -> info = v;
// 	novo -> prox = pList -> prim;
// 	pList -> prim = novo;
// }

// void removerIni (struct ListaSimplesEnc *pList){

// 	struct Nodo *pAux = pList -> prim;
// 	pList -> prim = pList -> prim -> prox;
// 	free(pAux);

// }


// int estaVazia(struct ListaSimplesEnc *pList) {

// 	return (pList->prim == NULL);

// }


// #endif