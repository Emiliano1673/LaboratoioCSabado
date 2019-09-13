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

//***
//ACT1

int main(int argc, char *argv[]) {
	int num1,num2;									//se declaran las variables a usar
	
	printf("Introduzca la nota de una materia: \n");		//el usuario introduce una calificacion del 1 al 10
	scanf("%d",&num1);										//se lee la nota con un scanf
	if (num1>4&&num1<11)									//se compara si es mayor a 4 y menor a 11 la nota
		printf("\nAPTO");									//se imprime el resultado
		else if(num1<5&&num1>-1)							//se compara si el numero esta entre 1 a 4, si no, se imprime no apto
			printf("\nNO APTO");
			else
				printf("\nERROR: nota incorrecta");			//en caso de que el numero este fuera del rango se imprime error


//***
//ACT2

	printf("\n\nIntroduzca un numero del 1 al 7: ");		//se pide un numero de entre el 1 al 7 al usuario
	scanf("%d",&num2);										//se introduce con un scanf
	if (num2==1)											//se compara para ver si el numero es 2
		printf("\nLunes");									//en caso de que si, se imprime el dia correspondiente a ese numero
		else if (num2==2)									//se repite el proceso con los demas dias de la semana
			printf("\nMartes");
			else if (num2==3)
				printf("\nMiercoles");
				else if (num2==4)
					printf("\nJueves");
					else if (num2==5)
						printf("\nViernes");
						else if (num2==6)
							printf("\nSabado");
							else if (num2==7)
								printf("\nDomingo");
								else 						//en caso de que el numero este fuera del rango se imprime "error: dia incorrecto"
									printf("\nERROR: dia incorrecto");
	return 0;			//return
}//fin del main
