/*
 ============================================================================
 Name        : parcial.c
 Author      : Marecos Leandro
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "UTN.h"


int main(void) {
	setbuf(stdout,NULL);

	    int option = 0;

	    LinkedList* listaComputadoras= ll_newLinkedList();

	    option = menu("1. Leer Archivo\n2. Ordenar lista por cuotas desendentes\n3. Imprimir Datos de la computadora\n4. Mapear Lista\n5. Genererar archivo mapeado\n6. Salir");

	    do{
			switch(option){
				case 1:

					break;
				case 2:

					break;
				case 3:

					break;
				case 4:

					break;
				case 5:

					break;
			}
		}while(option != 6);



	return EXIT_SUCCESS;
}
