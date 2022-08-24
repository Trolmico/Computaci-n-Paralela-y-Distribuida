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
/* Variables globales*/
int i,j, matrizA[100][100], matrizB[100][100], matrizC[100][100];
/*Función consola de bienvenida y nombre */
void bienvenida(){
		printf("*==============================*\n==");
		printf("*========== Punto 9 ============*\n");
		printf("*===== Imprimir 2 matrices y restarlas ==*\n");
		printf("*==============================*\n");
		
	}

	
void inicializacion_de_matrices(int l){
/*Se inicializa la matriz A con numeros aleatorios entre 0 y 9*/
	for (i=0; i<l; i++){
		for(j=0;j<l;j++){
			matrizA[i][j]=rand() % 10;
			matrizB[i][j]=rand() % 10;
			}
		}
		
	}
void suma_matriz(int l){
	for (i=0; i<l; i++){
		for(j=0;j<l;j++){
			matrizC[i][j]=matrizA[i][j]-matrizB[i][j];
			}
		}
}

void imp_matriz(int l){
/*Se imprime la matriz A*/
	printf("Matriz A: \n");
	for (i=0; i<l; i++){
		for(j=0;j<l;j++){
			printf(" %d ",matrizA[i][j]);
			}
		printf("\n");
		}
		
/*Se imprime la matriz B*/	
	printf("Matriz B: \n");
	for (i=0; i<l; i++){
		for(j=0;j<l;j++){
			printf(" %d ",matrizB[i][j]);
			}
		printf("\n");
}

/*Se imprime la suma de las 2 matrices (Matriz C)*/	
	printf("Suma de las matrices: \n");
	for (i=0; i<l; i++){
		for(j=0;j<l;j++){
			if(matrizC[i][j]>=0){
				printf("  %d ",matrizC[i][j]);
			}else printf(" %d ",matrizC[i][j]);
			
			}
		printf("\n");
		}			
}


		
int main(){
	int l;
	bienvenida();
	printf("Introduce el tamaño de la matriz cuadrada(maximo 7x7): \n");
  	scanf("%d", &l);
  	if (l>7){
  	printf("el tamaño máximo es 7, vuelva a introducir el número: \n");
  	scanf("%d", &l);
  	}
  	inicializacion_de_matrices(l);
  	suma_matriz(l);
	imp_matriz(l);	
	printf("\n");

		return 0;

}
