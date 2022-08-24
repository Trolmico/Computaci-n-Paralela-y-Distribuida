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
void bienvenida(){
		printf("*==============================*\n==");
		printf("*========== Punto 3 ============*\n");
		printf("*===== Distancia entre dos puntos. ==*\n");
		printf("*==============================*\n");
		
	}
void dibujo_triangulo(int cantidad){
	
	int i,j;
	for (i=0; i<cantidad; i++){
		for(j=0;j<i;j++){
		    printf("*");
		}
		printf("\n");
	}
}
	
int main(){
	int cantidad,l;
	bienvenida();
	printf("Introduce la cantidad de lineas (maximo 14): \n");
  	scanf("%d", &cantidad);
  	if (cantidad>14){
  	printf("el tamaño máximo es 14, vuelva a introducir el número: \n");
  	scanf("%d", &l);
  	}
	dibujo_triangulo(cantidad);	
	printf("\n");

		return 0;
}
