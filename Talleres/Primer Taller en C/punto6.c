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
		printf("*========== Punto 6 ============*\n");
		printf("*===== Imprimir matriz de '1' ==*\n");
		printf("*==============================*\n");
		
	}

	
void imp_matriz(int lineas){
	int i,j, matriz[lineas][lineas];
	
	for (i=0; i<lineas; i++){
		for(j=0;j<lineas;j++){
			matriz[i][j]=1;
			}
		}
		
	for (i=0; i<lineas; i++){
		for(j=0;j<lineas;j++){
			printf(" %d ",matriz[i][j]);
			}
		printf("\n");
		}
	}
		
int main(){
	int lineas;
	bienvenida();
	printf("Introduce el tamaño de la matriz (maximo 7x7): \n");
  	scanf("%d", &lineas);
	if (lineas>7){
  	printf("el tamaño máximo es 7, vuelva a introducir el número: \n");
  	scanf("%d", &lineas);
  	}
	imp_matriz(lineas);	
	printf("\n");

		return 0;

}
