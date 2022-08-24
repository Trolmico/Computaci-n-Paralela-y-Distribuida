/**********************************************
* Fecha: 16 agosto 2022
* Autor: Nicolas Arboleda
* Materia: Parallel and Distribuied Computing
* Tema: Primer Taller en C
************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <sys/time.h>

/************DEFINICIÓN DE LAS FUNCIONES*********************/

/*Función consola de bienvenida y nombre */
void bienvenida(){
		printf("*==============================*\n==");
		printf("*========== Punto 4 ============*\n");
		printf("*===== 10 primeros números naturales ==*\n");
		printf("*==============================*\n");
		
	}

	
int main(){
	int i;
	bienvenida();

	for (i=1; i<=10; i++){
		printf(" %d", i);
	}

	printf("\n");

		return 0;
}
