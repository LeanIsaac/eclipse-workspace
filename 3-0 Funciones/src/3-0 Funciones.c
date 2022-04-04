/*
 ============================================================================
 Name        : 3-1.c
 Author      : MARECOS LEANDRO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
#include <stdio.h>
#include <stdlib.h>

// 1 decclaracion, prototipo o firma de la funcion
//int(<- tipo de dato de retorno, lo que devuelve una vez termine la tarea) sumar (int, int); (dentro de los parentecis van los datos/parametros/argumentos que va recibir la funcion)
int sumar (int, int);

int main(void)
{
    // 2 llamada de la funcion
    sumar()
    cuando llama a la funcion se detiene, y empieza a ejecutar la funcion suma.
}

//3 definicion o cuerpo de la funcion
int sumar(int, int){ //declara variables de tipo entero

}

    3 INSTANCIAS DE LA FUNCION
    1. prototipo
    2. cuerpo de la funcion.
    3. llamda de la funcion.

    MODULARIZACION, nuestros programas van a estar seperados por modulos, ej. sumar, resta, division..

    DEPURACION, cuando corregimos algo del programa que no esta bien.

    cuando cada modulo esta bien probado, se lo puede usar las veces que sea necesario sin volver a revisarlo.



*/
    #include <stdio.h>
    #include <stdlib.h>


    int suma(int a, int b);

   int main(void){
    	setbuf(stdout,NULL);

        int x,y,z; //variables locales

        printf("ingrese numero a sumar :");
        scanf("%d", &x);
        printf("ingrese numero a sumar :");
        scanf("%d", &y);
        z = suma (x,y); //se detiene y llama la funcion suma.
        printf("la suma es %d",z);
    }

    int suma (int a, int b){    //la var A, no es la variable X, tampoco var B es la Y. (las variable A y B estan ascociada a la llamada) remplaza las variables X e Y en la llamda.

        int total; //variable local.
        total = a + b;
        return total;
    }

    //alcance es igual a scope



