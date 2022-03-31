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
n�mero de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),

edad( solo mayores de edad, m�s de 17),
temperatura corporal (validar por favor)
y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de m�s de 60 a�os.
b) el n�mero de cliente y edad de la mujer soltera m�s joven.
c) cu�nto sale el viaje total sin descuento.
d) si hay mas del 50% de los pasajeros que tiene mas de 60 años , el precio final tiene un descuento del 25%, que
solo mostramos si corresponde.
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
 setbuf(stdout,NULL);

	int numeroDeCliente;
	char estadoCivil;
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

	int pasajerosMayores60 = 0;
	int pasajeros = 0;
	int descuento =0;
	int porcentajePasajerosMayores;
	int precioParcial = 0;
	//int antiBug;




	do{

	    printf("Ingrese el número de cliente :");
    	scanf("%d", &numeroDeCliente);
    	while(numeroDeCliente <0){
    	    printf("Ingrese el n�mero de cliente :");
    	    scanf("%d", &numeroDeCliente);
    	}
    	pasajeros++;

    	acumuladorPrecios += precio;

    	printf("Ingrese su estado civil [s]oltero, [c]asado, [v]iudo :");
    	setbuf(stdin, NULL);
    	scanf("%c", &estadoCivil);

        while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v'){
            printf("Vuelva a Ingresar: [s]oltero, [c]asado, [v]iudo :");
            setbuf(stdin, NULL);
            scanf("%c", &estadoCivil);
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

        printf("Ingrese el g�nero [f]emenino, [m]asculino, [n]o binario :");
        setbuf(stdin, NULL);
        scanf("%c", &genero);
    	while(genero != 'f' && genero != 'm' && genero != 'n'){
    	    printf("Vuelva a Ingresar el g�nero [f]emenino, [m]asculino, [n]o binario :");
            setbuf(stdin, NULL);
            scanf("%c", &genero);
    	}

    	//a) La cantidad de personas con estado "viudo" de mas de 60 a�os.
    	if(edad > 60){
			if(estadoCivil == 'v'){
				contadorAncianos++;
			}
			pasajerosMayores60++; //c)
    	}
    		porcentajePasajerosMayores = pasajerosMayores60 * 100/pasajeros;
    		//d)
    		if(porcentajePasajerosMayores > 50 ){
    			descuento = 25;
    		}
    		else{
    			descuento = 0;
    		}

    		precioParcial = acumuladorPrecios - (acumuladorPrecios * descuento / 100);

    	//b) el n�mero de cliente y edad de la mujer soltera mas joven.
    	if(genero == 'f'){
    	    if(edad < solteraMasJoven || flag == 1){
    	        solteraMasJoven = edad;
    	        numClienteSMasJoven = numeroDeCliente;
    	        flag = 0;
    	    }
    	}

	    printf("quiere seguir :");
	    setbuf(stdin, NULL);
	    //while((antiBug = getchar()) != '\n' && antiBug != EOF);
	    scanf("%c",&respuesta);
	}while(respuesta != 'n');


	//a) La cantidad de personas con estado "viudo" de m�s de 60 a�os.
	if(contadorAncianos > 0){
	    printf("\nLa cantidad de personas Viudas con m�s de 60 a�os son %d",contadorAncianos);
	}

	//b) el n�mero de cliente y edad de la mujer soltera m�s joven.
	if(solteraMasJoven > 0){
	    printf("\nEl n�mero de cliente, de la soltera mas joven es :%d y su edad %d",numClienteSMasJoven, solteraMasJoven);
	}

	//c) cu�nto sale el viaje total sin descuento.
	printf("\nPrecio del viaje en total es de $%d ",acumuladorPrecios);

	//d) si hay mas del 50% de los pasajeros que tiene mas de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
	if(descuento != 0){
		printf("\nEl Precio final con descuento es de $%d ",precioParcial);
	}

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
