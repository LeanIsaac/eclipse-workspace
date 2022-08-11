/*
 * controller.c
 *
 *  Created on: 10 ago. 2022
 *      Author: equipo
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "participante.h"
#include "UTN.h"
#include "parser.h"
#include "controller.h"

int controller_loadFromText(char* path, LinkedList* pArrayListParticipantes){

	int retorno =-1;
	FILE* pArchivo = NULL;

	if(pArrayListParticipantes != NULL && path != NULL){
		pArchivo = fopen(path, "r");

		if(pArchivo != NULL){

			parser_FromText(pArchivo, pArrayListParticipantes);
			printf("\nCARGA EXITOSA\n\n");
			retorno = 0;
		}
		else{
			printf("\nERROR EN LA CARGA\n");
		}

		fclose(pArchivo);
	}

	return retorno;
}

int controller_sort(LinkedList* pArrayListParticipantes){
	int retorno = -1;
	int flag = 0;

	if(pArrayListParticipantes != NULL){
		ll_sort(pArrayListParticipantes, participante_OrdenarNombre, 0);
		flag = 1;
	}

	if(flag == 1){
		printf("\nSe Ordeno Correctamente\n\n");
	}
	else{
		printf("\nERROR, No se pudo Ordenar\n\n");
	}

	return retorno;
}

int controller_List(LinkedList* pArrayListParticipantes){
	int retorno = -1;
	int i;
	eParticipante* aux = NULL;
	int tam;

	printf("\n===================================================================================================\n");
	printf("ID\t\tNombre\t\tEdad\tDificultad\tScore\n");
	printf("===================================================================================================\n");

	if(pArrayListParticipantes != NULL){

		tam = ll_len(pArrayListParticipantes);

		for(i=0; i<tam; i++){
			aux = (eParticipante*)ll_get(pArrayListParticipantes, i);
			participante_Mostrar(aux);
		}
	}
	else
	{
		printf("\nError\n");
	}
	return retorno;
}







