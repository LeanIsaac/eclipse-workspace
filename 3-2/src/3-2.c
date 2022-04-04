/*
╔═════════════════════════════════════════════════════════════════════════════════════════════════════╗
║   MARECOS LEANDRO	                                                                                  ║
║   Ejercicio 3-2:																					  ║
║   Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso   ║
║   afirmativo y 0 en caso contrario. Probar en el main.                                              ║
╚═════════════════════════════════════════════════════════════════════════════════════════════════════╝
*/
#include <stdio.h>
#include "par.h" //mi biclioteca

    //prototipo
	//ya lo agrege a mi biclioteca


    //llamada
    int main(){
    	setbuf(stdout,NULL);

        int num;
        printf("Ingrese un numero :");
        scanf("%d",&num);
        par(num);

        return 0;
    }

    //cuerpo de la funcion
    //en la mi biblioteca


