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
		printf("*========== Punto 2 ============*\n");
		printf("*===== convertir los días en años, semanas y días. ==*\n");
		printf("*==============================*\n");
		
	}

void convertion(int x){
	
	int years;
	int weeks;
	int days;
	years=x/365;
	weeks=x%365/7;
	days=x%365%7;
	printf("años: %d \n",years); 
	printf("semanas: %d \n",weeks);
	printf("dias: %d \n",days);
	
}
	
int main(){
	int x;
	bienvenida();
	printf("Introduce el N° de dias: \n");
  	scanf("%d", &x);
	convertion(x);
	printf("\n");
		return 0;
	}
