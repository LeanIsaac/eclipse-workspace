/*
 ============================================================================
 Name        : .c
 Author      : Marecos Leandro
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "LinkedList.h"
#include "participante.h"
#include "UTN.h"
#include "parser.h"
#include "controller.h"

int main(void) {
	setbuf(stdout, NULL);
	char archivo[1000];
	char auxArchivo[10] = "src/";
	int opcion;

	LinkedList* listParticipante = ll_newLinkedList();
	//LinkedList* nueva_ll = NULL;

	do{
		opcion = menu(">>>>> MENU <<<<<\n\n1.Cargar Archivo\n2. Ordenar Lista Desendente"
					  "\n3. Imprimir Datos Segun Dificultad\n4. etc\n5. etc\n6. Salir");
		switch(opcion){
		case 1:
			//get_String(archivo, "\nIngrese El Nombre Del Archivo >>>", "\nERROR, Reingrese El Nombre Del Archivo >>>");
			getString(archivo, "\nIngrese El Nombre Del Archivo >>>", 100);
			strcat(auxArchivo, archivo);
			controller_loadFromText(auxArchivo, listParticipante);
			break;
		case 2:
			controller_sort(listParticipante);
			break;
		case 3:
			controller_List(listParticipante);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			printf("\nSaliendo...");
			//system("clear");
			printf("\nADIOS!!!");
			break;
		}

	}while(opcion != 6);

	ll_deleteLinkedList(listParticipante);


	return 0;
}
