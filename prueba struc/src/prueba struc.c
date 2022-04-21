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
#define CANT 2

typedef struct{
	char nombre[31];
	int nota;
}eAlumno;

int main(void) {
	setbuf(stdout,NULL);
	eAlumno persona;
	int i,j;
	char aux;

	for(i = 0; i<CANT ; i++){
		printf("Ingrese nombre :");
		fflush(stdin);
		scanf("%[^\n]",persona.nombre);

		printf("Ingrese nota :");
		scanf("%d",&persona.nota);
	}

	for(i=0;i<CANT-1;i++){

		for(j =0;j<CANT+1;j++){
			/*
			if(persona.nota[i] > persona.nota[j] ){
				aux = persona.nota[i];
				persona.nota[i] = persona.nota[j];//Swap
		        persona.nota[j
		}
	}

	for(i = 0; i<CANT ; i++){
		printf("Nombre %s, Nota %d",persona.nombre,persona.nota);
	}
	return 0;
}

//%[^\n]
