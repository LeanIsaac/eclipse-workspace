/*
╔═════════════════════════════════════════════════════════════════════╗
║   MARECOS LEANDRO													  ║
║	Ejercicio 3-3:                                                    ║
║   Crear una función que pida el ingreso de un entero y lo retorne.  ║
╚═════════════════════════════════════════════════════════════════════╝
*/
#include <stdio.h>

//prototipo
int entero();

int main(){
    setbuf(stdout,NULL);
    int guardar;
    guardar = entero();
    return 0;
}

//cuerpo de la función
int entero(){
	int a;
    printf("Ingrese un entero :");
    scanf("%d",&a);
    printf("Retorno :%d",a);
    return a;
}
