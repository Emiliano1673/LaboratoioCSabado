/*
Autor: Emiliano Sanchez Campa
Fecha: 12/09/2019
Grupo: #
Horario: sabados 9 am-11 am
Matrícula: 1941551
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//**************ACTIVIDAD1*****************
	
	int nc[24]={12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};	//declaracion del arreglo, con 24 espacios
	int r;																					//declaracion de r, variable que se usara para cambiar valores del arreglo
	
	printf("\n//**************ACTIVIDAD1*****************");
	r=2;																					//se declara r=2
	printf("\nHora %d numero de coches igual a: %d",r,nc[2]);								//se imprime el valor del arreglo en la posicion 2
	nc[r]=57;																				//se accede a la posicion 2 por medio de r y se cambia el valor a 57
	printf("\nHora %d numero de coches igual a: %d",r,nc[2]);								//se imprime el resultado
	
	r=21;																					//se declara r=21
	printf("\nHora %d numero de coches igual a: %d",r,nc[21]);								//se imprime el valor del arreglo en la posicion 21
	nc[r]=57;																				//se accede a la posicion 21 por medio de r y se cambia el valor a 57
	printf("\nHora %d numero de coches igual a: %d",r,nc[21]);								//se imprime el resultado
	
	//**************ACTIVIDAD2*****************
	
	printf("\n\n//**************ACTIVIDAD2*****************");
	int A=8,B=4;																			//se declaran las variables A y B
	r=A/B;																					//la variable r es igual a la division de A entre B
	nc[2]=14;																				//se reestablece el valor original de la posicon 2 del arreglo
	printf("\nHora %d numero de coches igual a: %d",r,nc[2]);								//para apreciar al cambio, se imprime
	nc[r]=57;																				//se accede a la posicion 2 (la division de A entre B) por medio de r
	printf("\nHora %d numero de coches igual a: %d",r,nc[2]);								//una vez que se accede se cambia el valor a 57 y se imprime el resultado
	
	return 0;
}
