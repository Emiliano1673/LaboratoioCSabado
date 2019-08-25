/*
*Autor: Emiliano Sánchez Campa
*Fecha: 24/08/2019
*Grupo: #
*Horario: Sabado 9 am - 11 am
*Matrícula: 1941551
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,r1,r2,r3,r4;		//la variable x es la variable que se usara para las operaciones, r1 es la variable en la que se almacenara la respuesta 1
	
	printf("Introduce el numero: \n");
	scanf("%f",&x);						//Se pide el numero x con el que se efectuaran las operaciones
	r1=((x-1)/4)-((x-5)/36);			//Se efectuan las operaciones
	r2=(6*(((x+1)/8)-(((2*x)-3)/16)));
	r3=((.6666)*(x-(1-((x-2)/3))))+1;
	r4=2-((-2*(x+1))-((x-3)/2));
	
	printf("\nResultado 1: %.2f",r1);	//Se imprime el resultado 
	printf("\nResultado 2: %.2f",r2);	
	printf("\nResultado 3: %.2f",r3);	
	printf("\nResultado 4: %.2f",r4);
	
	//Comentario para identificar branch Practica 3
	return 0;
}
