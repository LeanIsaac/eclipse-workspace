/*===========================================================================
 Name        : punteros.c
 Author      : Marecos Leandro
 ===========================================================================*/

#include <stdio.h>
#include <stdlib.h>

#define CANT 5

int main(void) {
	setbuf(stdout,NULL);

	    int vec[CANT];
	    int *punteroInt;
	    int i;

	    punteroInt = vec; //ptr=&vec[0];

	    for( i=0; i<CANT; i++){
	        *( punteroInt + i ) = i + 1;
	    }

	    for( i=0; i<CANT; i++){
	        if(i < 4){
	        	printf (" %d - ", *( punteroInt + i ));
	        }
	        else{
	        	printf (" %d ", *( punteroInt + i ));
	        }
	    }

	    printf("\n\n %d", sizeof(int));
	return 0;
}
