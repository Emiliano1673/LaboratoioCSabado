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

char vocales(char *p);					//declaracion de funcion, con variable de tipo apuntador
int main(int argc, char *argv[]) {
	
	char cadena[10];					//cadena de caracteres
	char *p;							//apuntador de tipo char
	scanf("%s",&cadena);				//se le pide una cadena al usuario
	p=&cadena[0];						//la direccion del primer caracter de la cadena se guarda en el apuntador p
	vocales(p);							//se invoca a la funcion vocales y se usa como argumento el apuntador
		
	int a=5,b=16;						//variables tipo entero
	int *n,*m;							//apuntadores de tipo entero
	n=&a;								//n y m apuntan a las direcciones de a y b respectivamente
	m=&b;
	printf("\n%d",(*n+*m));				//se imprime el resultado del contenido de la direccion de n y m
	return 0;
}										//fin del main

char vocales(char *p){
	int i,v=0;												//declaracion de variables tipo int
	for (i=0;i<10;i++){										//ciclo for, evalua los 10 caracteres de la cadena
		if (*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')	//si el contenido de la direccion de p, es igual a una vocal
			v++;											//el valor de v aumenta, lo que significa que ya hay una vocal encontrada
		*p++;												//la variable apunta al siguiente lugar en la cadena
	}
	printf("\nNumero de vocales: %d",v);					//termina el ciclo e imprime v, el numero de vocales
}															//fin de vocales
