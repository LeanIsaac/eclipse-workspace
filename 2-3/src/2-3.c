/*
 ============================================================================
 Name        : 2-3.c
 Author      : Marecos Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona
debemos obtener los siguientes datos:
número de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),

edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que
solo mostramos si corresponde.
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
 setbuf(stdout,NULL);

	int numeroDeCliente;
	char EstadoCivil;
	int edad;
	int temperatura;
	char genero;
	char respuesta;

	int contadorAncianos = 0;
	int numClienteSMasJoven ;
	int flag = 1;
	int solteraMasJoven;
	int acumuladorPrecios =0;
	int precio = 600;


	do{

	    printf("Ingrese el número de cliente :");
    	scanf("%d", &numeroDeCliente);
    	while(numeroDeCliente <0){
    	    printf("Ingrese el número de cliente :");
    	    scanf("%d", &numeroDeCliente);
    	}

    	acumuladorPrecios += precio;

    	printf("Ingrese su estado civil [s]oltero, [c]asado, [v]iudo :");
    	setbuf(stdin, NULL);
    	scanf("%c", &EstadoCivil);

        while(EstadoCivil != 's' && EstadoCivil != 'c' && EstadoCivil != 'v'){
            printf("Vuelva a Ingresar: [s]oltero, [c]asado, [v]iudo :");
            setbuf(stdin, NULL);
            scanf("%c", &EstadoCivil);
        }

    	printf("Ingrese su edad :");
    	scanf("%d", &edad);
    	while(edad <17 || edad>100){
    	    printf("Vuelva a Ingresar su edad, entre 18 - 100:");
    	    scanf("%d", &edad);
    	}

        printf("Ingrese su temperatura, entre 35 - 40 :");
        scanf("%d",&temperatura);
        while(temperatura <35 || temperatura >40){
            printf("Vuelva a Ingresar su temperatura, entre 35 - 40 :");
            scanf("%d",&temperatura);
        }

        printf("Ingrese el género [f]emenino, [m]asculino, [n]o binario :");
        setbuf(stdin, NULL);
        scanf("%c", &genero);
    	while(genero != 'f' && genero != 'm' && genero != 'n'){
    	    printf("Vuelva a Ingresar el género [f]emenino, [m]asculino, [n]o binario :");
            setbuf(stdin, NULL);
            scanf("%c", &genero);
    	}

    	//a) La cantidad de personas con estado "viudo" de más de 60 años.
    	if(EstadoCivil == 'v' && edad > 60){
    	    contadorAncianos++;
    	}

    	//b) el número de cliente y edad de la mujer soltera más joven.
    	if(genero == 'f'){
    	    if(edad < solteraMasJoven || flag == 1){
    	        solteraMasJoven = edad;
    	        numClienteSMasJoven = numeroDeCliente;
    	        flag = 0;
    	    }
    	}

	    printf("quiere seguir :");
	    setbuf(stdin, NULL);
	    scanf("%c",&respuesta);
	}while(respuesta != 'n');

	//a) La cantidad de personas con estado "viudo" de más de 60 años.
	if(contadorAncianos > 0){
	    printf("\nLa cantidad de personas Viudas con más de 60 años son %d",contadorAncianos);
	}

	//b) el número de cliente y edad de la mujer soltera más joven.
	if(solteraMasJoven > 0){
	    printf("\nEl número de cliente, de la soltera mas joven es :%d y su edad %d",numClienteSMasJoven, solteraMasJoven);
	}

	//c) cuánto sale el viaje total sin descuento.
	printf("\nPrecio del viaje en total es de $%d ",acumuladorPrecios);

	return 0;
}

/*
    [cadena de caracteres]

    char nombre[15], apellido[15];

    printf("ingresa tu nombre: ");
    scanf("%s",nombre);

    printf("ingresa tu apellido: ");
    scanf("%s",apellido);

    printf("\n %s", nombre);
    printf("\n %s", apellido);
*/
