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

//xxxx Actividad1	
	int n,sum=0;					//declaracion de variables 
	char x='s';						//variable que controla el while
	
	while (x=='s'||x=='S'){								//inicio del while, mientras la respuesta sea s, sigue el ciclo
		printf("\nIntroduce un numero entero: ");		//se introduce un numero
		scanf("%d", &n);								//se guarda en la variable n
		fflush( stdin );								//se limpia el buffer
		sum=sum+n;										//se almacena la suma de los numeros introducidos
		n=0;
		printf("\nDesea introducir otro (s/n): " );		//se pregunta si se desea introducir otro numero
		scanf("%c", &x);								//se evalua la respuesta , s o n, si es s, el ciclo se cumple y vuelve a empezar
		fflush( stdin );								//en caso contrario, se cierera el ciclo
	}
	printf("\nLa suma de los numeros introducidos es: %d",sum);		//se imprime la suma
	
	
//xxxx Actividad2
	int num=9;								//se declara la variable num	
	
	while (num<101){							//inicia el while, como num fue declarado 9 y 9 es menor a 101, la condicion se cumple, inicia el ciclo
		printf("\nIntroduce un numero: ");		//se pide un numero al usuario
		scanf("%d",&num);								//se introduce y se guarda en num
		printf("\nIntroduciste este numero: %d",num);	//se le dice al usuario el numero que introdujo
														//en caso de que se introduzca un numero mayor a 100, se cierra eel ciclo
	}	
	
	return 0;
}
