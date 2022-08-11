/*
 * parser.c
 *
 *  Created on: 10 ago. 2022
 *      Author: equipo
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

int parser_FromText(FILE* pFile , LinkedList* pArrayListParticipante){
	int retorno = -1;
	char id[20];
	char nombre[100];
	char edad[50];
	char idDificultad[20];
	char score[100];
	eParticipante* unParticipante = NULL;

	if(pFile != NULL && pArrayListParticipante !=NULL){
		fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,edad,idDificultad,score);

		while(!feof(pFile))
		{
			fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,edad,idDificultad,score);

			unParticipante = participante_newParametros(id, nombre, edad, idDificultad, score);

			if(unParticipante != NULL){
				ll_add(pArrayListParticipante, unParticipante);
			}
		}
		retorno = 0;
	}

	return retorno;
}
