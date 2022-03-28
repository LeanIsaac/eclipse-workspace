/*
 ============================================================================
 Name        : 2-2.c
 Author      : Marecos Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 10 números enteros, distintos de cero.
 	Mostrar:
	a. Cantidad de pares e impares.
	b. El menor número ingresado.
	c. De los pares el mayor número ingresado.
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

	    //a. Cantidad de pares e impares.
	    for( int i = 0; i < 10 ; i++){
	        printf("Ingrese un número: ");
	        scanf("%d", &nro);

	        while(nro <=0){
	        	printf("Error, Ingrese otro número: ");
	        	scanf("%d", &nro);
	        }

	        if(nro % 2 == 0){
				contadorPares++;
				//c. De los pares el mayor número ingresado.
				if(nro > maxNumPar || i == 0){
					maxNumPar = nro;
				}
	        }
			else
			{
			    contadorImpares++;
			}

	        //b. El menor número ingresado.
	        if(nro < menorNumero || flag == 1){
	            menorNumero = nro;
	            flag = 0;
	        }
	        /*
	        if( flag == 1){
	            menorNumero = nro;
	            flag = 0;
	        }
	        else{
	            if(nro<menorNumero){
	                menorNumero = nro;
	            }
	        }
	        */

	    }
	    //b. El menor número ingresado.
	    printf("El menor número ingresado es: %d",menorNumero);
	    //a. Cantidad de pares e impares.
	    printf("\nCantidad de pares encontrados: %d",contadorPares);
	    printf("\nCantidad de impares encontrados: %d ", contadorImpares);
	    //c. De los pares el mayor número ingresado.
	    printf("\nEl número Par máximo es: %d ", maxNumPar);

	    system ("pause");

	    return 0;
}
