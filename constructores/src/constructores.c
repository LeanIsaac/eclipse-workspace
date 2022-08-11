/*
 ============================================================================
 Name        : constructores.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nombre[20];
	char apellido[20];
	int dni;

}eAlumno;

//constructor
eAlumno * newAlumno();//constructor por defecto
eAlumno * newAlumnoParam(char * nombre,char * apellido,int dni);//constructor con parametros

int setDni(eAlumno * this,int dni);
//int getDni(eAlumno * this ,int * dni);1 forma
int getDni(eAlumno * this);
//completar get y set restantes
char* getNombre(eAlumno*this);

int setNombre(eAlumno * this, char * nombre);

char* getApellido(eAlumno*this);

int main(void){
	setbuf(stdout,NULL);

	eAlumno * pAlumno;
	//int dni;

	//pAlumno = newAlumno();

	pAlumno = newAlumnoParam("Leandro","Marecos",3049123);

	//getDni(pAlumno,&dni);


	if(pAlumno != NULL){
		//printf("%s -- %s -- %d",pAlumno->nombre,pAlumno->apellido,getDni(pAlumno));//pasar a una funcion
		printf("%s -- %s -- %d",getNombre(pAlumno),getApellido(pAlumno),getDni(pAlumno));//pasar a una funcion
	}
	else{
		printf("error, no se encontro memoria,por favor intente de nuevo!!!");
	}

	if(pAlumno != NULL){
		free(pAlumno);
	}


	return EXIT_SUCCESS;
}


eAlumno * newAlumno(){
	 eAlumno * puntero;

	 puntero =  (eAlumno*)malloc(sizeof(eAlumno));

	 if(puntero !=NULL){
		strcpy( puntero->apellido  ," ");
		strcpy( puntero->nombre ," ");
		puntero->dni = 0;
	 }

	return puntero;
}


eAlumno * newAlumnoParam(char * nombre,char * apellido,int dni){
	eAlumno *  alumno = newAlumno();


	if(nombre != NULL && apellido !=NULL && alumno != NULL){
		if(setDni(alumno,dni) == -1){
			free(alumno);
		}
		else{
			strcpy( alumno->apellido  ,apellido);
			strcpy( alumno->nombre ,nombre);
		}
	}

	return alumno;
}


int setDni(eAlumno * this,int dni){
	int retorno = -1;

	if(dni > 5000 && this != NULL){
		this->dni = dni;
		retorno = 0;
	}

	return retorno;
}

/*int getDni(eAlumno * this ,int * dni){
	int retorno = -1;

	if(this!= NULL && dni != NULL){
		*dni = this->dni;
		retorno = 0;
	}

	return retorno;
}
*/

int getDni(eAlumno * this){
	int retorno =-1;

	if(this!= NULL){
		retorno =  this->dni;
	}

	return retorno;
}

int setNombre(eAlumno * this, char * nombre){
	int retorno=-1;
	if(this != NULL && nombre != NULL){
		strcpy(this->nombre, nombre);
		retorno=0;
	}
	return retorno;
}



char* getNombre(eAlumno*this){
	/*
	char aux[20];
	if(this != NULL){
		strcpy(aux, this->nombre);
	}
	*/
	return this->nombre;
}

char* getApellido(eAlumno*this){

	return this->apellido;
}

