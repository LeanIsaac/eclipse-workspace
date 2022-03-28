/*
 ============================================================================
 Name        : 1-3.c
 Author      : Leandro Marecos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingrese el primer numero: ");
	scanf("%d" , &numeroUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d" , &numeroDos);
    printf("Ingrese el tercer numero número: ");
	scanf("%d" , &numeroTres);

    if(numeroUno>numeroDos && numeroDos<numeroTres){
        printf("el numero del medio es :%d", numeroDos);
    }
    else{
        if(numeroUno<numeroDos && numeroDos < numeroTres){
            printf("el numero del medio es :%d", numeroUno);
        }
        else{
            printf("el numero del medio es :%d", numeroTres);
        }
    }
	system("pause");
	return 0;
}



