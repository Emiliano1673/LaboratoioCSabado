#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,r1;		//la variable x es la variable que se usara para las operaciones, r1 es la variable en la que se almacenara la respuesta 1
	
	printf("Introduce el numero: \n");
	scanf("%f",&x);						//Se pide el numero x con el que se efectuaran las operaciones
	r1=((x-1)/4)-((x-5)/36);			//Se efectuan las operaciones
	
	printf("\nResultado 1: %.2f",r1);	//Se imprime el resultado 
	//Comentario para identificar branch Practica 3
	return 0;
}
