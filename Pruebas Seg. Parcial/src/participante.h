/*
 * participante.h
 *
 *  Created on: 10 ago. 2022
 *      Author: equipo
 */

#ifndef PARTICIPANTE_H_
#define PARTICIPANTE_H_

typedef struct{
	int id;
	char nombre[10];
	int edad;
	int idDificultad;
	int score;
}eParticipante;

eParticipante* participante_new(void);
eParticipante* participante_newParametros(char* idStr, char* nombre, char* edad, char* idDificultad, char* score);
int participante_setID(eParticipante* this, int  id);
int participante_getID(eParticipante* this, int* id);
int participante_setNombre(eParticipante* this, char* nombre);
int participante_getNombre(eParticipante* this, char* nombre);
int participante_setEdad(eParticipante* this, int edad);
int participante_getEdad(eParticipante* this, int* edad);
int participante_setIdDificultad(eParticipante* this, int idDificultad);
int participante_getIdDificultad(eParticipante* this, int* idDificultad);
int participante_setScore(eParticipante* this, int score);
int participante_getScore(eParticipante* this, int* score);
int participante_Dificultad(int idDificultad, char* tipo);
void participante_Mostrar(eParticipante* participante);
int participante_OrdenarNombre(void* pParticipanteUno, void* pParticipanteDos);

#endif /* PARTICIPANTE_H_ */
