/*
 ============================================================================
 Name        : 3-5.c
 Author      : MARECOS LEANDRO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
int Sumar1(int, int); x
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);
*/
#include <stdio.h>
#include <stdlib.h>

    //prototipo
    int suma(int , int);

    int main (){
    	setbuf(stdout,NULL);

        int x,y,z; //variables locales

        printf("ingrese numero a sumar :");
        scanf("%d", &x);
        printf("ingrese numero a sumar :");
        scanf("%d", &y);
        z = suma (x,y); //se detiene y llama la funcion suma.
        printf("la suma es %d",z);
    }

    //cuerpo de la funcion
    int suma (int a, int b){    //la var A, no es la variable X, tampoco var B es la Y. (las variable A y B estan ascociada a la llamada) remplaza las variables X e Y en la llamda.

        int total; //variable local.
        total = a + b;
        return total;
    }


    /*
     funcion
     dividir en xada modulo,
     tinen que hacer algo sencillo
     un programador piensa que va hacer esa funcion
     despues se pone a codear






     */
