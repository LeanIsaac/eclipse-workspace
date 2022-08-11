/*
 * arrayPassenger.c
 *
 *  Created on: 27 jun. 2022
 *      Author: equipo
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayPassenger.h"
#include "UTN.h"

#define LIBRE 0
#define OCUPADO 1
#define BAJA -1


eFlyCode flyCode[] = {{1, "ABC104"},{2, "ADF909"},{3, "M231"}};

eTypePassenger TypePassenger[] = {{1, "TURISTA"},{2, "EJECUTIVO"}, {3, "PRIMERA CLASE"}};

//////////////////////////////////////////////////////////////////////////////

int initPassengers(ePassenger* list,int len){
	int i;
	int retorno = -1;
	if(list != NULL && len > 0){
		retorno = 0;
		for( i=0; i<len; i++ ){
			list[i].isEmpty = LIBRE;
		}
	}
		return retorno;
}

//////////////////////////////////////////////////////////////////////////////

int addPassenger(ePassenger* list, int len, int id, char name[], char lastName[],float price,int typePassenger, char flyCode[]){

	int i, rto=-1;

	if(list != NULL && len > 0){
		for( i = 0; i < len; i++ ){
			if(list[i].isEmpty == LIBRE){
				list[i].id = id;
				strcpy(list[i].name, name);
				strcpy(list[i].lastName,lastName);
				list[i].price = price;
				list[i].typePassenger = typePassenger;
				strcpy(list[i].flycode,flyCode);
				list[i].isEmpty = OCUPADO;
				rto = 0;
			}
		}
	}

	return rto;

}
//////////////////////////////////////////////////////////////////////////////

void cargaDeDatos(ePassenger* lista, int len, int *ID){

	char string[51];
		char name[51];
		char lastName[51];
		float price=0;
		int typePassenger=0;
		int i, codigoAux;
		char flyCodigo[10];

		int id;

		id = *ID;

		get_String(string, "\nIngrese el nombre del pasajero --> ", "\nError, Reingrese el nombre del pasajero --> ");
		strcpy(name, string);
		printf("\nEl Nombre ingresado es: [ %s ]\n",name);

		get_String(string, "\nIngrese el Apellido del pasajero --> ", "\nError, Reingrese el Apellido del pasajero --> ");
		strcpy(lastName, string);
		printf("\nEl Apellido ingresado es: [ %s ]\n",lastName);

		price = get_Float("\nIngrese el precio del vuelo --> ", "Vuelava ingresar el precio: ", 0, 999999);
		printf("\nEl Precio ingresado es: [ %.2f $]\n",price);

		printf("\nTIPO DE PASAJERO\nID\tCLASE");
		mostrarTipoPasajero(TypePassenger, 3);
		typePassenger = get_Int("\n\nIngrese el tipo de clase --> ", "Vuela a ingresar la clase de vuelo: ", 3, 1);
		printf("\nEl Tipo de Pasajero ingresado es: [ %d ]\n",typePassenger);

		printf("\nCODIGOS DE VUELOS");
		mostrarCodigoVuelo(flyCode, 3);
		codigoAux = get_Int("\nIngrese el ID de su codigo de Vuelo --> ", "Vuelva a intentarlo: ", 3, 1);

		for(i=0;i<3;i++){
			if(flyCode[i].idFlyCode ==  codigoAux){
				codigoAux = i;
			}
		}
		strcpy(flyCodigo, flyCode[codigoAux].flyCode);

		addPassenger(lista, len, id, name, lastName, price, typePassenger, flyCodigo);

		*ID = *ID +1;

}

/////////////////////////////////////////////////////////////
/*
int alta(ePassenger* lista, int len){
	int ind;
	int rto = -1;

	if(lista != NULL && len > 0){
		ind = buscarEspacioLibre(lista, len);
		if(ind != -1){
			lista[ind] = cargaDeDatos(lista, len, );

			rto = 0;
		}
	}

	return rto;
}
*/

/////////////////////////////////////////////////////////////
int buscarEspacioLibre(ePassenger lista [], int len){

	int i;
	int indice = -1;

	for(i=0;i<len;i++){
		if(lista[i].isEmpty == LIBRE){
			indice = i;
			break;
		}
	}
	return indice;
}


///////////////////////////////////////////////////////////////////////////////////////
void mostrarTipoPasajero(eTypePassenger list[], int tam){
	int j;
	for(j=0;j<tam;j++){
		printf("\n %d  -  %10s ",list[j].typePassenger ,list[j].descrpicion);
	}
}

///////////////////////////////////////////////////////////////////////////////////////

void mostrarCodigoVuelo(eFlyCode list[], int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("\n %2d  -  %10s ",list[i].idFlyCode ,list[i].flyCode);
	}
}



void listar(ePassenger* lista, int len){
	int i;

	for(i=0; i<len; i++){
		if(lista[i].isEmpty == OCUPADO){
			printf("%d ",lista[i].id);
		}
	}


}




