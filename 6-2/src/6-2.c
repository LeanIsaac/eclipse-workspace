/*
 ============================================================================
 Name        : 6-2.c
 Author      : MARECOS LEANDRO
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT 10

int main(){
    setbuf(stdout,NULL);

    int numeros[CANT];
    int i;
    int negativos[CANT];
    int positivos[CANT];
    int contadorPositivos =0;
    int contadorNegativos =0;

    for(i=0;i<CANT;i++){
        printf("Ingresar numero :");
        scanf("%d",&numeros[i]);
        if(numeros[i]<0){

            negativos[contadorNegativos] = numeros[i];
            contadorNegativos++;
        }
        else{
            if(numeros[i]>0){
                positivos[contadorPositivos] = numeros[i];
                contadorPositivos++;
            }
        }
    }
    for(i=0;i<CANT;i++){
        //if()
        printf("El numero ingresado es: %d\n",numeros[i]);
        //separar y validar
        printf("El contador de numeros positivos es: %d\n",positivos[i]);

        printf("El contador de numeros negativos es: %d\n",negativos[i]);
    }

}





/*
int main(){
    int i, j, aux;
    int numeros[10];

    printf("\nMuestro el array sin ordenar\n");
    for(i=0;i<10;i++)
    {
        printf("\n%d", numeros[i]);
    }
    for(i=0;i<10-1;i++){
        for(j=i+1;j<10;j++)
        {
            if(numeros[i]>numeros[j])
            {
                aux=numeros[i];
                numeros [i]=numeros[j];
                numeros[j]=aux;
            }
        }
    }
    printf("\nMuestro el array ordenado\n");
    for(i=0;i<10;i++)
    {
        printf("\n%d", numeros[i]);
    }
}
*/
