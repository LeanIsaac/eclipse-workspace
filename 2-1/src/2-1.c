/*
 ============================================================================
 Name        : 2-1.c
 Author      : Marecos Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-1: Ingresar 5 n�meros enteros calcular y mostrar el promedio de los n�meros. Probar la
 aplicaci�n con distintos valores.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int numero5;
	int total;
	int promedio;

	printf("ingrese un numero : ");
	scanf("%d", &numero1);

	printf("ingrese otro numero : ");
	scanf("%d", &numero2);

	printf("ingrese otro numero : ");
	scanf("%d", &numero3);

	printf("ingrese otro numero : ");
	scanf("%d", &numero4);

	printf("ingrese otro numero : ");
	scanf("%d", &numero5);

	total = numero1 + numero2 + numero3 + numero4 + numero5;
	promedio = (total/5);

	printf("el total es de : %d y el promedio es de : %d", total, promedio);

	system("pause");
	return EXIT_SUCCESS;
}
