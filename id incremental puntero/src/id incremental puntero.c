/*============================================================================
 Name        : id.c
 Author      : Marecos Leandro
 ============================================================================*/

#include <stdio.h>
#include <stdlib.h>

int idIncremental(int *id);

int main(void) {
	setbuf(stdout,NULL);

	int id=100;
	char opcion;
	int guardoId;

	do{
		guardoId = idIncremental(&id);

		printf("\nID: [ %d ]\n\n", guardoId);

		printf("Desea generar un id? [s|n] : ");
		fflush(stdin);
		scanf("%c",&opcion);

	}while(opcion != 'n');


	return EXIT_SUCCESS;
}

int idIncremental(int *id){
	int ids;

	ids=*id;

	*id = *id +1;

	return ids;
}
