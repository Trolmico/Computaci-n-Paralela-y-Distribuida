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
		printf("*========== Punto 3 ============*\n");
		printf("*===== Distancia entre dos puntos. ==*\n");
		printf("*==============================*\n");
	}

float distancia(float x1, float x2, float y1, float y2){
	
	float dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	return dist; 
}
	
int main(){
	float x1,x2,y1,y2; float dist;
	bienvenida();
	printf("Entrada x1: \n");
  	scanf("%f", &x1);
  	printf("Entrada x2: \n");
  	scanf("%f", &x2);
  	printf("Entrada y1: \n");
  	scanf("%f", &y1);
  	printf("Entrada y2: \n");
  	scanf("%f", &y2);
  
	dist=distancia(x1,x2,y1,y2);
	printf("La distancia entre dichos puntos es: %f ", dist);	
	printf("\n");

		return 0;
	}
