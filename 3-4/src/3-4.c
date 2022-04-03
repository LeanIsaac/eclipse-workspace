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
int entero(int);

int main(){
    setbuf(stdout,NULL);
    int num;
    entero(num);
}

//cuerpo de la función
int entero(int a){
    int num;
    printf("Ingrese un entero entre 10 y 20:");
    scanf("%d",&num);
    if(num <10 || num >20){
        printf("Ese numero no esta dentro del rango estimado ");
    }else{
        printf("Retorno :%d",num);
    }
}
