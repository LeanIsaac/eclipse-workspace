/*
╔═════════════════════════════════════════════════════════════════════════════════════════════════════╗
║   Ejercicio 3-1:																					  ║
║   MARECOS LEANDRO                                                                             	  ║
║   Crear una función que muestre por pantalla el número flotante que recibe como parámetro.          ║
╚═════════════════════════════════════════════════════════════════════════════════════════════════════╝
*/
#include <stdio.h>

//prototipo
void flotante(float);

float main(){
	setbuf(stdout,NULL);
    float numero = 0.46;
    flotante(numero);   //llamo a la funcion
}

//cuerpo de la funcion
void flotante(float a){

  printf("%.2f", a);

}
