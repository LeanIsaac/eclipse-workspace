/*
 * ticket.c
 *
 *  Created on: 25 abr. 2022
 *      Author: equipo
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ticket.h"

/*********************************************************/

int inicializarTickets(eTicket listaTikect[],int tam){
	int i;
	int retorno = -1;
	//Inicializamos los estados
	if(listaTikect != NULL && tam > 0){
		retorno = 0;
		for( i=0; i<tam; i++ ){
			listaTikect[i].estado = 0;
		}

	}
		return retorno;
}


/*********************************************************/

int buscarEspacioLibre(eTicket listarTickes [], int tam){

	int i;
	int indice = -1;

	for(i=0;i<tam;i++){
		if(listarTickes[i].estado == 0){
			indice = i;
			break;
		}
	}
	return indice;
}


/*********************************************************/

int altaTickets(eTicket listarTickes [], int tam){

	int indice;
	int retorno = -1;

	if(listarTickes != NULL && tam > 0){

		indice = buscarEspacioLibre(listarTickes, tam);

		if(indice != -1){

			listarTickes[indice] = cargarTicket();
			retorno = 0;
		}
	}
	return retorno;
}


/*********************************************************/

eTicket cargarTicket(void){
	eTicket ticket;
	printf("Codigo: ");
	scanf("%d", &ticket.codigo);

	printf("Nombre: ");
	fflush(stdin);
	scanf("%[^\n]", ticket.nombre);

	printf("Apellido: ");
	fflush(stdin);
	scanf("%[^\n]", ticket.apellido);

	printf("Horario de salida: ");
	scanf("%d",&ticket.horarioSalida);

	printf("Horario de llegada: ");
	scanf("%d", &ticket.horarioLlegada);

	ticket.estado = 1;

	return ticket;
}


/*********************************************************/

int buscarCodigo(eTicket listaTickets[], int tam, int codigo){

	int i,retorno=-1;

	for(i =0; i<tam;i++){
		if(listaTickets[i].codigo == codigo && listaTickets[i].estado == 1){
			retorno = i;
			break;
		}
	}
	return retorno;
}

/***********************************************************************************/
void bajaDeDatos(eTicket listarTicket[], int cant){
	int i, auxCodigo;
	char confirmar;

	printf("Codigo a dar de baja: ");
	scanf("%d", &auxCodigo);

	for( i=0; i<cant; i++ ){
		if( auxCodigo == listarTicket[i].codigo && listarTicket[i].estado == 1 ){
			MostrarUnTicket( listarTicket[i] );
			printf("Dar de baja? [S|N]: ");
			fflush(stdin);
			scanf("%c", &confirmar);
			confirmar = toupper( confirmar );

			if( confirmar == 'S'){
				listarTicket[i].estado = -1;
				//contadorDatos--;
				printf("\nSe han borrado los datos...\n");
			}
			else{
				printf("\nNo se han borrado los datos...\n");
			}
			break;
		}
	}
}


/******************************************************************************************/

int menu( char opciones[]  ){
	int opcion;

	printf( opciones );

	printf("\nOpcion >> ");
	scanf("%d", &opcion);

	return opcion;
}


/*********************************************************/

void MostrarUnTicket(eTicket unTicket){
	printf("\nCodigo [%d], %s %s, salida %d hs, llegada %d hs\n", unTicket.codigo, unTicket.nombre, unTicket.apellido, unTicket.horarioSalida, unTicket.horarioLlegada);
}


/*********************************************************/

void mostarTickets(eTicket listaTikets[], int tam){
	int i;

	//printf("Codigo nombre apellido horario salida horario llegada");
	for(i=0;i<tam;i++){
		if(listaTikets[i].estado == 1){
			MostrarUnTicket(listaTikets[i]);
		}
	}
}


/************************************************************************************************************************************/

void modificarTickets(eTicket listarTickets[], int tam){
	int i, auxCodigo, opcionModificar;

	mostarTickets(listarTickets, tam);
	printf("Codigo a modificar: ");
	scanf("%d", &auxCodigo);

	for( i=0; i<tam; i++ ){
		if( auxCodigo == listarTickets[i].codigo && listarTickets[i].estado == 1 ){
			MostrarUnTicket( listarTickets[i] );
		do{
			opcionModificar = menu( "MENU\n1. Codigo\n2. Nombre\n3. Apellido\n4. Hora de Salida\n5. Hora de llegada\n6. Salir" );

				switch( opcionModificar ){
					case 1:
						printf("Codigo: ");
						scanf("%d", &listarTickets[i].codigo);
						break;
					case 2:
						printf("Nombre: ");
						fflush(stdin);
						scanf("%[^\n]", listarTickets[i].nombre);
						break;
					case 3:
						printf("Apellido: ");
						fflush(stdin);
						scanf("%[^\n]", listarTickets[i].apellido);
						break;
					case 4:
						printf("Horario de salida: ");
						scanf("%d", &listarTickets[i].horarioSalida);
						break;
					case 5:
						printf("Horario de llegada: ");
						scanf("%d", &listarTickets[i].horarioLlegada);
						break;
					case 6:
						printf("Saliendo de modificar...\n");
						break;
					default:
						printf("La opcion ingresada es incorrecta..\n");
						break;
				}
			}while( opcionModificar != 6 );

				break;
			}
		}
	}
/****************************************************************************************************************************************************/





