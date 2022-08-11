/*============================================================================
 	 Name        : Memoria.c
 	 Author      : Marecos Leandro
 ============================================================================*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nombre[50];
    int edad;
}ePersona;

//CONSTRUCTOR por defecto
//reserva memoria dinamica
ePersona * newPersona();

int main(){
	setbuf(stdout,NULL);

    int seguirCargando;
    int i;
    int auxNuevaLogitud;
    int logitudPersonas = 1;

    ePersona* pArrayPersona;
    ePersona* pAuxPersona;
    // Creamos el array de personas

    //pArrayPersona = (ePersona*)malloc(sizeof( ePersona ));
    // ==
    pArrayPersona = newPersona();

    if (pArrayPersona == NULL){
        printf("\nNo hay lugar en memoria\n");
        exit(0);
    }

    while(1){

        printf("\nIngrese su nombre: ");
        fflush(stdin);
        scanf("%[^\n]",(pArrayPersona + logitudPersonas-1)->nombre);
        printf("\nIngrese su edad: ");
        scanf("%d",&((pArrayPersona + logitudPersonas-1)->edad));
        printf("\nSi desea cargar otra persona ingrese (1): ");
        scanf("%d",&seguirCargando);

        if(seguirCargando == 1){
            // Calculamos el nuevo tamaño del array
            auxNuevaLogitud = sizeof( ePersona ) * logitudPersonas;

            // Redimencionamos la lista
            //realocamos el espacio en un auxiliar, para no perder la referencia
            pAuxPersona = realloc( pArrayPersona, auxNuevaLogitud);

            if (pAuxPersona == NULL){
                printf("\nNo hay lugar en memoria\n");
                break;

            }
            logitudPersonas++; //Incremento el contador de personas
            pArrayPersona = pAuxPersona;
        }
        else{
            //si seguirCargando es distinto de 1 sale del while
            break;
        }
    }

    for(i = 0; i < logitudPersonas; i++){

        printf("\n[ Nombre: %s - ",( pArrayPersona + i )->nombre);
        printf("Edad: %d ]",( pArrayPersona + i )->edad);

    }

    free(pArrayPersona); // Liberamos la memoria

    return 0;
}

//constructor
ePersona * newPersona(){
	ePersona*puntero;

	puntero = (ePersona*)malloc(sizeof(ePersona));

	return puntero;
}
