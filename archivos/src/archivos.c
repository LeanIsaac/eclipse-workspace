/*===========================================================================
 Name        : archivos.c
 Author      : Marecos Leandro
 Description : Hello World in C, Ansi-style
 ============================================================================*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id;
	int num;
	float sueldo;
}eEmpleado;

int main(void) {
	setbuf(stdout, NULL);

	//ESCRIBIR UN ARCHIVO DE TEXTO - path -> ruta/directorios -> absolutas y relativas.
	//abrir un archivo con fopen

	/* MODOS
	 	 * "r" : Abre un Archivo lectura debe existir.
	 	 * "w" : Abre archivo para escritura, crea uno nuevo si no existe o pisa si ya existia previamente uno.
	 	 * "un": Abre archivo para escritura, Apendea. de no existir archivo lo crea.
	 	 * "r+": Abre archivo para escritura/lectura. Debe existir.
	 	 * "w+": Abre archivo lectura/escritura. Si no existe lo crea.
	 	 * "a+": apendea.
	 */

	FILE* pArchivo = NULL;
	/*
	//---------------------------------------ESCRIBIR TXT
	pArchivo = fopen("archivo.txt","w");
	if(pArchivo != NULL){

		fprintf(pArchivo, "%d, %d - %.2f\n", 10, 1, 150000.23);
		fprintf(pArchivo, "%d, %d - %.2f\n", 11, 2, 159394.22);
		fprintf(pArchivo, "%d, %d - %.2f\n", 12, 3, 152324.98);

		puts("Cerrando archivo...");

		//cierro el archivo, si no queda tomado
		fclose(pArchivo);
	}*/


	//---------------------------------------LEER UN TXT
	pArchivo = fopen("archivo.txt","r");

	if(pArchivo != NULL){
		eEmpleado aux;

		do{

			fscanf(pArchivo, "%d, %d - %f\n", &aux.id, &aux.num, &aux.sueldo);
			printf("ID: %d -  NUM: %d -  SUELDO: %.2f\n", aux.id, aux.num, aux.sueldo);

		}while(feof(pArchivo)==0);

		fclose(pArchivo);
	}


	/*
	//---------------------------------------ESCRIBIR UN BINARIO
	pArchivo = fopen("archivoBin.bin","wb");

	if(pArchivo != NULL){
		eEmpleado aux = {1111, 1, 9999.99};

		//guardar los datos de la direccion de mem de aux, sizeof el peso, cuanto (1), donde va guardar (pArchivo)
		fwrite(&aux, sizeof(eEmpleado), 1, pArchivo);

		fclose(pArchivo);
	}
	*/

	/*
	//---------------------------------------LEER UN BINARIO
		pArchivo = fopen("archivoBin.bin","rb");

		if(pArchivo != NULL){
			eEmpleado aux;

			do{
				//lee desde el aux y lo guarda en el puntero
				if(fread(&aux, sizeof(eEmpleado), 1, pArchivo)==1){
					printf("ID: %d -  NUM: %d -  SUELDO: %.2f\n", aux.id, aux.num, aux.sueldo);
				}

			}while(!feof(pArchivo));

			fclose(pArchivo);
		}
		*/
	return 0;
}



