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
		printf("*========== Punto 1 ============*\n");
		printf("*===== Producto de 2 enteros ==*\n");
		printf("*==============================*\n");
		
	}

int product(int n1, int n2){
	int resultado;
	resultado=n1*n2;
	return resultado;	
	}

	

int main(){
	int resultado,n1,n2;
	bienvenida();
	printf("Introduce dos enteros separados por un espacio: \n");
  	scanf("%d %d", &n1, &n2);
	resultado=product(n1,n2);
	printf("el resultado es: %d ", resultado);	
	printf("\n");
	
		return 0;
	}
