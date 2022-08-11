/*
 ============================================================================
 Name        : TP_2_PRUEBA.c
 Author      : Marecos Leandro
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayPassenger.h"
#include "UTN.h"

#define CANT 10

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int id=100;

	ePassenger passenger[CANT];

	initPassengers(passenger, CANT);

	do{
		opcion = menu("\nAEROLINEAS ARGENTINAS\n1. ALTA\n2. MODIFICAR \n3. BAJA\n4. INFORMAR\n5. CARGA FORZADA\n8. SALIR\n ");

		switch(opcion){

			case 1:
				cargaDeDatos(passenger, CANT, &id);
				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
				listar(passenger, CANT);
				break;

			case 5:
				break;

			case 6:
				break;

			default:
				printf(" ");
				break;
		}

	}while(opcion != 6);

}
