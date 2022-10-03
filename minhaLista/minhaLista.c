#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// #include "minhaLista.h"

struct Nodo {

	int info;
	struct Nodo *prox;

};

struct ListaSimplesEnc {

	struct Nodo *prim;

};

void criarLista (struct ListaSimplesEnc *pList) {

	pList -> prim = NULL;
    

}

void mostrarLista (struct ListaSimplesEnc *pList){

	struct Nodo *p;

	for (p = pList -> prim; p != NULL; p = p->prox) {

		printf("%d\t", p->info);

	}

	printf("\n");

}

void inserirIni (struct ListaSimplesEnc *pList, int v){
	struct Nodo *novo;
	novo = (struct Nodo*) malloc (sizeof (struct Nodo));
	novo -> info = v;
	novo -> prox = pList -> prim;
	pList -> prim = novo;
}

void removerIni (struct ListaSimplesEnc *pList){

	struct Nodo *pAux = pList -> prim;
	pList -> prim = pList -> prim -> prox;
	free(pAux);

}


int estaVazia(struct ListaSimplesEnc *pList) {

	return (pList->prim == NULL);

}


int main () {
	struct ListaSimplesEnc minhaLista;
	int valor, op;

	criarLista(&minhaLista);

	while( 1 ){

		printf( "1 - Inserir elemento no inicio\n" );
		printf( "2 - Remover elemento no inicio\n" );
		printf( "3 - Mostrar lista\n" );
		printf( "4 - Sair\n" );
		printf( "Opcao? " );
		scanf( "%d", &op );

		switch( op ){

			case 1: // inserir elemento no inicio
		
				printf( "Valor? " );
				scanf( "%d", &valor );
				inserirIni(&minhaLista, valor);
				break;
			case 2: // remover determinado elemento
                removerIni(&minhaLista);
				break;
			case 3: //  mostrar lista
				if (estaVazia(&minhaLista)) {
					printf("Lista vazia");
				}
				else {
					mostrarLista(&minhaLista);
				}
				break;
			case 4: // sair do programa
				
				exit(0);
				
				
		}

	}
}