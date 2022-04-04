/*
╔═════════════════════════════════════════════════════════════════════════════════════════════╗
║   MARECOS LEANDRO																			  ║
║	Ejercicio 3-4:                                                                            ║
║   Especializar la función anterior para que permita validar el entero ingresado en un rango ║
║   determinado.                                                                              ║
╚═════════════════════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>

//prototipo
void entero(int);

int	main(){
    setbuf(stdout,NULL);
    int num;
    printf("Ingrese un entero entre 10 y 20:");
    scanf("%d",&num);
    entero(num);
}

//cuerpo de la función
void entero(int a){
    if(a <10 || a >20){
        printf("Ese numero no esta dentro del rango estimado ");
    }
    else{
        printf("Retorno :%d",a);
    }
}
