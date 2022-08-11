/*
 * computer.h
 *
 *  Created on: 29 jun. 2022
 *      Author: equipo
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_

#define MAX_CHAR 51

typedef struct{
	int id;
	char descpripcion[MAX_CHAR];
	float precio;
	int idTipo;
	int cuotas;
}eComputer;

#endif /* COMPUTER_H_ */
