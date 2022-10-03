#include <stdio.h>
#include <stdlib.h>
#include "minhaFila.h"

int main () {

	int opcao, capa;
	int valor;
	struct Fila umaFila;

	// cria a fila
	printf("\nCapacidade da fila? ");
	scanf("%d",&capa);
	criarFila(&umaFila, capa);

	// apresenta menu
	while( 1 ){

		printf("\n1 - Inserir elemento\n2 - Remover primeiro elemento\n3 - Mostrar Fila\n0 - Sair\n\nOpcao? ");
		scanf("%d", &opcao);

		switch(opcao){

			case 0: exit(0);

			case 1: // insere elemento
				if (estaCheia(&umaFila)){

					printf("\nFila Cheia!!!\n\n");

				}
				else {

					printf("\nValor do elemento a ser inserido? ");
					scanf("%d", &valor);
					inserir(&umaFila,valor);

				}

				break;

			case 2: // remove elemento
				if (estaVazia(&umaFila)){

					printf("\nFila vazia!!!\n\n");

				}
				else {

					valor = remover(&umaFila);
					printf("\n%1d removido com sucesso\n\n", valor) ; 

				}
				break;

				case 3: // mostrar fila
					if (estaVazia(&umaFila)){

						printf("\nFila vazia!!!\n\n");

					}
					else {

						printf("\nConteudo da fila => ");
						mostrarFila(&umaFila);

					}
					break;

				default:
					printf("\nOpcao Invalida\n\n");

		}
	}
}