/*
 ============================================================================
 Name        : prueba.c
 Author      : Marecos Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANT 3

typedef struct{
	char nombre[51];
	int nota;
}eAlumno;

int main(void) {
	setbuf(stdout,NULL);

	eAlumno persona[CANT];
	int i,j,aux;
	char nombre[51];

	for(i = 0; i<CANT ; i++){
		printf("Ingrese nombre :");
		fflush(stdin);
		scanf("%[^\n]",nombre);
		strcpy(persona[i].nombre, nombre);

		printf("Ingrese nota :");
		scanf("%d",&persona[i].nota);
	}

	for(i = 0; i<CANT-1; i++){
		for(j = 0; j < CANT+1; j++){
			if(persona[i].nota > persona[j].nota){

				aux = persona[i].nota;
				persona[i].nota = persona[j].nota;//Swap
		        persona[j].nota = aux;
			}
		}

		for(i = 0; i<CANT ; i++){
			printf("\nNombre %s - Nota %d\n",persona[i].nombre, persona[i].nota);
		}
	}
	return 0;
}
//%[^\n]


