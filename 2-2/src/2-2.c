/*
 ============================================================================
 Name        : 2-2.c
 Author      : Marecos Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 10 n�meros enteros, distintos de cero.
 	Mostrar:
	a. Cantidad de pares e impares.
	b. El menor n�mero ingresado.
	c. De los pares el mayor n�mero ingresado.
	d. Suma de los positivos.
	e. Producto de los negativos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int nro;
	    int menorNumero;
	    int flag = 1;
	    int contadorPares = 0;
	    int contadorImpares =0;
	    int maxNumPar;
	    int acumuladorPositivos = 0;
	    int producto = 1;


	    for( int i = 0; i < 10 ; i++){
	        printf("Ingrese un n�mero: ");
	        scanf("%d", &nro);

	        while(nro == 0){
	        	printf("Error, Ingrese otro n�mero: ");
	        	scanf("%d", &nro);
	        }
	        if(nro > 0){
	        	acumuladorPositivos += nro;
	        }
	        else
			{
	        	producto = producto*nro;
			}

	        //a. Cantidad de pares e impares.
	        if(nro % 2 == 0){
				contadorPares++;
				//c. De los pares el mayor n�mero ingresado.
				if(nro > maxNumPar || i == 0){
					maxNumPar = nro;
				}
	        }
			else
			{
			    contadorImpares++;
			}

	        //b. El menor n�mero ingresado.
	        if(nro < menorNumero || flag == 1){
	            menorNumero = nro;
	            flag = 0;
	        }
	    }


	    //b. El menor n�mero ingresado.
	    printf("El menor n�mero ingresado es: %d",menorNumero);
	    //a. Cantidad de pares e impares.
	    printf("\nCantidad de pares encontrados: %d",contadorPares);
	    printf("\nCantidad de impares encontrados: %d ", contadorImpares);
	    //c. De los pares el mayor n�mero ingresado.
	    printf("\nEl n�mero Par m�ximo es: %d ", maxNumPar);
	    //d. Suma de los positivos.
	    printf("\nLa cantidad De numeros Positivos es: %d ", acumuladorPositivos);
	    //e. Producto de los negativos.
	    printf("\nProducto De los Negativos es: %d ", producto);

	    return 0;
}
