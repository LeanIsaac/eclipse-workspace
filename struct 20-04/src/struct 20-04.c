/*
 ============================================================================
 Name        : struct.c
 Author      : Marecos Leandro
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ticket.h"

#define CANT 3

int main(void){
	setbuf(stdout,NULL);

	eTicket tickets[CANT];
	int opcion;
	int contadorDatos=0;
	char opciones[1024];
	int datoEncontrado;

	inicializarTickets(tickets,CANT);

	do{
		opcion = menu( "══>> MENU <<══\n1. Alta\n2. Baja\n3. Modificar\n4. Listar\n5. Buscar un dato\n6. Salir" );

		switch( opcion ){
			//Alta
			case 1:
				if(altaTickets(tickets, CANT)==0){
					contadorDatos++;
					printf("carga existosa\n");
				}
				else{
					printf("error\n");
				}
			break;

			//BAJA
			case 2:
				if( contadorDatos > 0 ){
					bajaDeDatos(tickets, CANT);
				}
				else{
					printf("\nNo existen datos cargados...\n");
				}
				break;

			//MODIFICAR
			case 3:
				if( contadorDatos > 0 ){
					modificarTickets(tickets, CANT);
				}
				else{
					printf("No se puede modificar, No existen datos cargados...\n");
				}
				break;

			//LISTAR
			case 4:
				if( contadorDatos > 0 ){
					mostarTickets(tickets, CANT);
				}
				else{
					printf("No hay datos cargados...\n");
				}
				break;

			//BUSCAR UN DATO
			case 5:
				if(contadorDatos >0){
					datoEncontrado = buscarCodigo(tickets, CANT, 1);

					if(datoEncontrado != -1){
						MostrarUnTicket(tickets[datoEncontrado]);
					}
				}
				else{
					printf("No hay datos cargados...\n");
				}
				break;

			case 6:
				printf("¡ADIOS!");
				break;

			default:
				printf("La opcion ingresada es incorrecta..\n");
		}
	}while( opcion != 6 );

	return 0;
}



