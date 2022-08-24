/**********************************************
* Fecha: 17 agosto 2022
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
		printf("*========== Punto 7 ============*\n");
		printf("*===== Imprimir matriz de numeros aleatorios ==*\n");
		printf("*==============================*\n");
		
	}

	
void mostrar_matriz(int lineas){
	int i,j, matriz[lineas][lineas];
	
	for (i=0; i<lineas; i++){
		for(j=0;j<lineas;j++){
			matriz[i][j]=rand() % 10;
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
	printf("Introduce el tamaño de la matriz cuadrada(maximo 7x7): \n");
  	scanf("%d", &lineas);
  	if (lineas>7){
  		printf("el tamaño máximo es 7, vuelva a introducir el número: \n");
  		scanf("%d", &lineas);
  	}
	mostrar_matriz(lineas);	
	printf("\n");

		return 0;

}
