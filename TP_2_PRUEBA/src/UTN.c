/*
 * UTN.c
 *
 *  Created on: 28 abr. 2022
 *      Author: equipo
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "UTN.h"

////////////////////////////////////////////////////////
int menu( char opciones[] ){
	int opcion;

	printf( "%s", opciones );

	opcion = getInt("\nOpcion >> ");

	return opcion;
}

////////////////////////////////////////////////////////
/*
int get_String(char string[], int max, char texto[]){
	int retorno;
	retorno=0;

	if(string!= NULL && texto != NULL){

		printf("%s",texto);
		fflush(stdin);
		gets(string);
		while((strlen(string)) <1 || (strlen(string) > max)){
			printf("\nError, Vuelva a ingresar (maximo %d caracteres): ", max);
			fflush(stdin);
			gets(string);
 		}
		retorno = 1;
	}
	return retorno;
}
*/

////////////////////////////////////////////////////////
int get_Int(char mensaje[],char msjError[],int maximo, int minimo){
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    while(numero > maximo || numero < minimo){

        printf("%s",msjError);
        scanf("%d",&numero);
    }
    return numero;
}

////////////////////////////////////////////////////////
float get_Float(char mensaje[],char msjError[], int Minimo, int Maximo){
    float num;

    printf("%s",mensaje);
    //setbuf(stdin,NULL);
    scanf("%f",&num);
    while(num<Minimo || num>Maximo){

        printf("%s",msjError);
        //setbuf(stdin,NULL);
        scanf("%f",&num);
    }
    return num;
}

////////////////////////////////////////////////////////
//valida no pasar el limite de una cadena de caracteres
void getString(char palabra[],char mensaje[],int tamanio){
	char auxilar[1024];
	int cantidadLetras;

	printf("%s",mensaje);
	setbuf(stdin,NULL);
	gets(auxilar);

	cantidadLetras = strlen(auxilar);

	while(cantidadLetras > tamanio){
		printf("%s",mensaje);
		setbuf(stdin,NULL);
		gets(auxilar);
	}
	strcpy(palabra,auxilar);
}

////////////////////////////////////////////////////////
int validar_Cadena(char string[]){
    int i=0;
    int rto=0;
    int j;

    j = strlen(string);

    while(i<j && rto == 0){

        if(isalpha(string[i])!=0){
            i++;
        }
        else{
            rto = -1;
        }

    }
    return rto;
}

////////////////////////////////////////////////////////
int get_String(char cadena[], char mensaje[],char msjError[]){
    int rto = -1;
    char aux[300];

    if( cadena != NULL && mensaje != NULL && msjError != NULL ){
        rto = 0;

        printf("%s",mensaje);
        setbuf(stdin,NULL);
        scanf("%[^\n]",aux);

        while(validar_Cadena(aux)==-1){

            printf("%s",msjError);
            setbuf(stdin,NULL);
            scanf("%[^\n]",aux);
        }
    }
    strcpy(cadena,aux);
    return rto;
}
////////////////////////////////////////////////////////

int getInt(char mensaje[])//que sea un numero
{
	int retorno = -1;
	int esNumero;
	char auxiliar[30];

	getString(auxiliar,mensaje,30); // donde se va a guardar, ingresa un numero,limite de la cadena

	while(esNumerica(auxiliar) < 1){
	  getString(auxiliar,mensaje,30);
	}

	esNumero = atoi(auxiliar);

	retorno = esNumero;

 return retorno;
}

////////////////////////////////////////////////////////

int esNumerica(char auxiliar[]){

	int i;
	int largo;
	int retorno =-1;

	if(auxiliar != NULL){
		retorno = 1;

		largo = strlen(auxiliar);

		for(i=0;i<largo;i++){
			if(isdigit(auxiliar[i])==0){
				retorno =0;
				break;
			}
		}
	}
	return retorno;
}
