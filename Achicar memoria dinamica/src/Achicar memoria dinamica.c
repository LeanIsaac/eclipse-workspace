/* *****************************************************************************
				Sabado (28/5/22) - Memoria Dinamica
****************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    setbuf(stdout,NULL);

    int* pVector;

    pVector = (int*)malloc(sizeof(int)*5);

    for(int i = 0; i<5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", (pVector+i));
    }

    for(int i = 0; i<5; i++){
        printf("%d ",*(pVector+i));
    }

    printf("\n");

    //Redimensiono el vector c/ un aux
    int* pAuxVector;
    pAuxVector = (int*)realloc(pVector,sizeof(int)*10);

    if(pAuxVector != NULL){
        pVector = pAuxVector;
        for(int i = 5; i<10;i++){
            printf("Ingrese un numero: ");
            scanf("%d", (pVector+i));
        }

        printf("\nVector de 10:\n");
        for(int i = 0; i<10;i++){
            printf("%d ",*(pVector+i));
        }

    }

    //Redimensiono el vector a 3 (lo achico) | lo demas es basura
    pVector = (int*)realloc(pVector, sizeof(int)*3);

    printf("\nVector de 3:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ",*(pVector+i));
    }

    return 0;
}











