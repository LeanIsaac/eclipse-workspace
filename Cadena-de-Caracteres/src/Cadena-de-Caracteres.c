/*
 ============================================================================
 Name        : Cadena-de-Caracteres.c
 Author      : Marecos Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    setbuf(stdout,NULL);
    int tam;
    char nombre[20];

    char auxiliar[20];
    int cantidad;

    printf("Ingrese su nombre :");
    //gets(nombre); //sirve solo para windows, ademas es insegura, puede sobreescribir la memoria si no validas el tamaño del array correcto
    setbuf(stdin,NULL);
    //scanf("%s",nombre);
    scanf("%[^\n]",nombre); //lee hasta que detecte un enter

   printf("Tu nombre es :%s",nombre);

   tam = strlen(nombre); //duvuelva la cantidad de caractaeres

   printf("\nCantidad de cararcteres :%d",tam);
/*
   do{ //valido un rango
   	printf("");
   	flush(stdin);
   	gets(auxiliar);
   	cantidad = strlen(auxiliar);

   }while(cantidad > 19);

   //strcpy(nombre, auxiliar); //nos perimite copiar el contenido a otro, asignarle.
    *
    *        nombre = nombre2 // concatena
    * strcat(nombre, nombre2);
*/
    return 0;
}

/*
//limpia el final de una cadena de cararcteres
void setFgets(char cadena[]){
	int cantidad;
	cantidad = strlen(cadena);

	cadena[cantidad -1] = '\0';
}
*/
