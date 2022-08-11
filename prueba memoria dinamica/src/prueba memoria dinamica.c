/* *****************************************************************************
                Sabado (28/5/22) - Memoria Dinamica
****************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int legajo;
    char nombre[20];
    float nota;

}eAlumno;

//prototipo
eAlumno* cargarAlumno();

int main(){
    setbuf(stdout,NULL);

    eAlumno* pAlumno;
    pAlumno = cargarAlumno();

    printf("%d %s %.2f\n", pAlumno->legajo,pAlumno->nombre,pAlumno->nota);
    printf("%d %s %.2f\n", pAlumno->legajo,pAlumno->nombre,pAlumno->nota);
    printf("%d %s %.2f\n", pAlumno->legajo,pAlumno->nombre,pAlumno->nota);

    printf("\nDireccion de Memoria de (punteroAlumno) --> [ %p ]\n\n", pAlumno);

    //Libero Memoria
    free(pAlumno);
    printf("Liberando Memoria...\n");

    printf("%d %s %.2f\n", pAlumno->legajo,pAlumno->nombre,pAlumno->nota);
    printf("%d %s %.2f\n", pAlumno->legajo,pAlumno->nombre,pAlumno->nota);

    return 0;
}

//funcion
eAlumno* cargarAlumno(){
    eAlumno* pAlumno;

    pAlumno = (eAlumno*) malloc(sizeof(eAlumno));
    if(pAlumno != NULL){
        pAlumno->legajo = 1000;
        strcpy(pAlumno->nombre,"sarasa");
        pAlumno->nota = 7.5;
    }

    return pAlumno;
}











