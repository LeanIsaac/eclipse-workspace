/*
 ============================================================================
 Name        : 2-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-4:
 Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char letra;
	int contadorP = 0;

	for(int i = 0; i<5; i++){
		printf("Ingresar Letra :");
		setbuf(stdin, NULL);
		scanf("%c",&letra);

		if(letra == 'p'){
			contadorP++;
		}
	}

	if(contadorP > 0){
		printf("se ingresaron %d letras [p]",contadorP);
	}
	return 0;
}
