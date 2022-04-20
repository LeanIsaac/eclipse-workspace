/*
 ============================================================================
 Name        : clase.c
 Author      : Marecos Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main(void) {
	setbuf(stdout,NULL);

	char sexo [CANT] = {'f', 'm', 'f', 'm', 'f'};
	int notas [CANT] = {6, 4, 3, 5, 7};
	int aux, auxB,i;

	for( i=0;i<CANT-1;i++)//FOR PRINCIPAL
	    {
	        for(int j=i+1;j<CANT;j++)//FOR SECUNDARIO
	        {
	            if(notas[i]>notas[j])
	            {
	            	//ORDENO EDADES
	                aux = notas[i];
	                notas[i] = notas[j];//Swap
	                notas[j] = aux;

	                //ORDENO LOS SEXOS
	                auxB = sexo[i];
	                sexo[i] =sexo[j];
	                sexo[i] = auxB;
	            }
	        }
	    }

	for(i = 0;i<CANT; i++){
		printf("\t[ %d ]",notas[i]);

	}
	printf("\n");

	for(i = 0;i<CANT; i++){
			printf("\t[ %c ]",sexo[i]);

		}

	return 0;
}
