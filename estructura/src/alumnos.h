/*
 * alumnos.h
 *
 *  Created on: 19 abr. 2022
 *      Author: equipo
 */

#ifndef ALUMNOS_H_
#define ALUMNOS_H_

typedef struct
{
	char nombre [20];
	int edad;
	int nota;
	int estado;

}eAlumno;

void inicializarVector(eAlumno listaAlumnos [],int tamanio);
int buscarLibre (eAlumno listaAlumnos [],int tamanio);
void altaAlumnos(eAlumno listaAlumnos [],int tamanio);
void imprimirAlumnos(eAlumno listaAlumnos [],int tamanio);



#endif /* ALUMNOS_H_ */
