/*
 ============================================================================
 Name        : 1-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
Marecos leandro
*/
#include <stdio.h>

int main(){
	setbuf(stdout,NULL);

    int numero1;
    int numero2;
    int numero3;

    printf("Ingrese el primer numero : ");
    scanf("%d",&numero1);

    printf("Ingrese el segundo numero : ");
    scanf("%d",&numero2);

    printf("Ingrese el tercer numero : ");
    scanf("%d",&numero3);

    if(numero1 > numero2 && numero1> numero3){
        printf("numero mayor %d",numero1);
    }
    else
    {
        if(numero2>numero3){
            printf("numero mayor %d", numero2);
        }
        else
        {
            printf("numero mayor %d", numero3);
        }
    }
    system("pause");

    return 0;
}
