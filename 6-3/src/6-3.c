/*
 ============================================================================
 Name        : 6-3.c
 Author      : Marecos Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 6-3:
 	dirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el
	apellido). Ninguna de las dos variables se puede modificar.
	Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
	Por ejemplo:

	Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
	Gomez, Juan Ignacio
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	setbuf(stdout,NULL);

	char nombre[31];
	char apellido[31];
	char apeNom[70];
	int i,cantidad, contador;

	printf("Ingrese su Apellido: ");
	fflush(stdin);
	scanf("%[^\n]",apellido);

	printf("Ingrese su Nombre: ");
	fflush(stdin);
	scanf("%[^\n]",nombre); // lee todo menos el \n

	//Quitamos espacio en blanco al comienzo
	cantidad = strlen(apellido);
	contador = 0;
	for(i = 0; i<cantidad; i++){
		if(apellido[i] == ' '){
			contador++;
		}
		else{
			break;
		}
	}

	if(contador > 0){
		for(i = 0; i<cantidad-contador+1; i++){
			apellido[i] = apellido[i + contador];
		}
	}

	strlwr(apellido);
	strlwr(nombre);

	apellido[0] = toupper(apellido[0]);
	//Gomez perez
	cantidad = strlen(apellido);
	for(i = 0; i<cantidad ; i++){
		if(	apellido[i] == ' '){
			apellido[i+1] = toupper(apellido[i+1]);
		}
	}

	nombre[0] = toupper(nombre[0]);
	cantidad = strlen(nombre);
	for(i = 0; i<cantidad ; i++){
		if(	nombre[i] == ' '){
			nombre[i+1] = toupper(nombre[i+1]);
		}
	}


	nombre[0] = toupper(nombre[0]);


	strcpy(apeNom ,apellido);
	//"Gomez"
	strcat(apeNom, ", ");
	//"Gomez, "
	strcat(apeNom, nombre);
	//"Gomez, Juan Ignacio"

	printf("%s",apeNom);
	return 0;
}

/*
	//version 1
int main(void) {
	setbuf(stdout,NULL);

	char nombre[31];
	char apellido[31];
	char apeNom[70];

	printf("Ingrese su Apellido");
	fflush(stdin);
	scanf("%[^\n]",apellido);

	printf("Ingrese su Nombre: ");
	fflush(stdin);
	scanf("%[^\n]",nombre); // lee todo menos el \n

	strlwr(apellido);
	strlwr(nombre);

	apellido[0] = toupper(apellido[0]);
	nombre[0] = toupper(nombre[0]);

	strcpy(apeNom ,apellido);
	//"Gomez"
	strcat(apeNom, ", ");
	//"Gomez, "
	strcat(apeNom, nombre);
	//"Gomez, Juan Ignacio"

	printf("%s",apeNom);
	return 0;
}
*/
