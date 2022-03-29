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
	setbuf(stdout,NULL);

	int nro1;
	int nro2;
	int nro3;
	int numeroDelMedio;

	printf("Ingrese el primer numero: ");
	scanf("%d" , &nro1);
	printf("Ingrese el segundo numero: ");
	scanf("%d" , &nro2);
    printf("Ingrese el tercer número: ");
	scanf("%d" , &nro3);

    /*
	if(numeroUno>numeroDos && numeroDos<numeroTres){
        printf("el numero del medio es :%d", numeroDos);
    }
    else{
        if(numeroUno<numeroDos && numeroDos < numeroTres){
            printf("el número del medio es :%d", numeroUno);
        }
        else{
            printf("el número del medio es :%d", numeroTres);
        }
    }
    */
	if(nro1 != nro2 && nro1 != nro3 && nro2 != nro3){
		if((nro1 > nro2 && nro1 < nro3) || (nro1 < nro2 && nro1 > nro3)){
			numeroDelMedio = nro1;
		}
		else
		{
			if((nro2 > nro1 && nro2 < nro3) || (nro2 < nro1 && nro2 > nro3)){
				numeroDelMedio = nro2;
			}
			else
			{
				numeroDelMedio = nro3;
			}
		}
		printf("El número del medio es: %d",numeroDelMedio);
	}
	else{
		printf("No Existe número del medio");
	}
	system("pause");
	return 0;
}



