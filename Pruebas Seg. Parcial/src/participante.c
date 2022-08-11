/*
 * participante.c
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

////////////////////////////////////////////////////////////////////////////////////
eParticipante* participante_new(void){

	return (eParticipante*)malloc(sizeof(eParticipante));
}
////////////////////////////////////////////////////////////////////////////////////
eParticipante* participante_newParametros(char* idStr, char* nombre, char* edad, char* idDificultad, char* score){

	eParticipante* participante;

	participante = participante_new();

	if(participante != NULL && idStr != NULL && nombre != NULL && edad != NULL && idDificultad != NULL && score != NULL)
	{
		participante_setID(participante, atoi(idStr));
		participante_setNombre(participante, nombre);
		participante_setEdad(participante, atoi(edad));
		participante_setIdDificultad(participante, atoi(idDificultad));
		participante_setScore(participante, atoi(score));
	}
	else{
		printf("\nError, No se puede Asignar Memoria\n");
	}
	return participante;
}

////////////////////////////////////////////////////////////////////////////////////
int participante_setID(eParticipante* this, int  id){
	int retorno = -1;

	if(this != NULL && id > 0)
	{
		retorno = 0;
		this ->id = id;
	}
	return retorno;
}

int participante_getID(eParticipante* this, int* id){
	int retorno = -1;

	if(this != NULL )
		{
			retorno = 0;
			*id = this->id;
		}

	return retorno;
}
////////////////////////////////////////////////////////////////////////////////////
int participante_setNombre(eParticipante* this, char* nombre){
	int retorno = -1;

		if(this != NULL && nombre != NULL)
		{
			strcpy(this->nombre, nombre);
			retorno = 0;
		}
		return retorno;
}


int participante_getNombre(eParticipante* this, char* nombre){
	int retorno = -1;

		if(this != NULL)
		{
			strcpy(nombre, this->nombre);
			retorno = 0;
		}
		return retorno;
}

////////////////////////////////////////////////////////////////////////////////////
int participante_setEdad(eParticipante* this, int edad){
	int retorno = -1;

		if(this != NULL && edad > 0)
		{
			retorno = 0;
			this ->edad = edad;
		}
		return retorno;
}


int participante_getEdad(eParticipante* this, int* edad){
	int retorno = -1;

		if(this != NULL)
		{
			retorno = 0;
			*edad = this->edad;
		}
		return retorno;
}

////////////////////////////////////////////////////////////////////////////////////
int participante_setIdDificultad(eParticipante* this, int idDificultad){
	int retorno = -1;

		if(this != NULL && idDificultad > 0)
		{
			retorno = 0;
			this ->idDificultad = idDificultad;
		}
		return retorno;
}

int participante_getIdDificultad(eParticipante* this, int* idDificultad){
	int retorno = -1;

		if(this != NULL)
		{
			retorno = 0;
			*idDificultad = this->idDificultad;
		}
		return retorno;
}

////////////////////////////////////////////////////////////////////////////////////
int participante_setScore(eParticipante* this, int score){
	int retorno = -1;

		if(this != NULL && score > 0)
		{
			retorno = 0;
			this ->score = score;
		}
		return retorno;
}

int participante_getScore(eParticipante* this, int* score){
	int retorno = -1;

		if(this != NULL)
		{
			retorno = 0;
			*score = this->score;
		}
		return retorno;
}

////////////////////////////////////////////////////////////////////////////////////
int participante_Dificultad(int idDificultad, char* tipo){
	int retorno = -1;

	if(tipo != NULL  && idDificultad > 0){
		switch(idDificultad){
		case 1:
			strcpy(tipo, "Facil");
			break;
		case 2:
			strcpy(tipo, "Normal");
			break;
		case 3:
			strcpy(tipo, "Dificil");
			break;
		}
		retorno = 0;
	}
	return retorno;
}

////////////////////////////////////////////////////////////////////////////////////
void participante_Mostrar(eParticipante* participante){
	int id;
	char nombre[100];
	int edad;
	int idDificultad;
	char dificultad[30];
	int score;

	if(participante != NULL){
		participante_getID(participante, &id);
		participante_getNombre(participante, nombre);
		participante_getEdad(participante, &edad);
		participante_getIdDificultad(participante, &idDificultad);
		participante_getScore(participante, &score);
		participante_Dificultad(idDificultad, dificultad);

		printf("%2d\t%18s\t%3d\t%10s\t%4d\n",id,nombre,edad,dificultad,score);
	}
	else{
		printf("\nError\n");
	}
}

////////////////////////////////////////////////////////////////////////////////////
int participante_OrdenarNombre(void* pParticipanteUno, void* pParticipanteDos){
	int retorno = -1;
	char nombreEmpleadoUno[30];
	char nombreEmpleadoDos[30];
	eParticipante* participanteUno = NULL;
	eParticipante* participanteDos = NULL;

	if(pParticipanteUno != NULL && pParticipanteDos != NULL)
	{
		participanteUno = (eParticipante*)pParticipanteUno;
		participanteDos =  (eParticipante*)pParticipanteDos;

		if(participanteUno != NULL && participanteDos != NULL)
		{
			participante_getNombre(participanteUno, nombreEmpleadoUno);
			participante_getNombre(participanteDos, nombreEmpleadoDos);
			retorno = strcmp(nombreEmpleadoUno,nombreEmpleadoDos);
		}
	}

	return retorno;
}

////////////////////////////////////////////////////////////////////////////////////










