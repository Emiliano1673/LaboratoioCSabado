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
		int ventasEmpleadoOficinaEdificio[6][10][2];						//se declara el arreglo de 3 dimensiones
		ventasEmpleadoOficinaEdificio[3][7][2] = 4234;						//se le da un valor al lugar 3,7,2 del arreglo 
		printf("\nEl empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido \n%d unidades\n",ventasEmpleadoOficinaEdificio[3][7][2]);  
																			//se imprime el valor guardado en el arreglo en el lugar 3,7,2 de 4234 
		
		//**************ACTIVIDAD2*****************
		ventasEmpleadoOficinaEdificio[3][7][2] = 4234+10;					//el valor guardado es cambiado por su valor original mas diez
		printf("\nEl empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido \n%d unidades",ventasEmpleadoOficinaEdificio[3][7][2]);
																			//se imprime el nuevo valor del arreglo guardado en el lugar 3,7,2
	return 0;
}

/*
a) ¿Cuantos elementos componen el array multidimensional?
120

b) ¿Qué ocurre si intentamos mostrar por pantalla un valor con un índice que no
está definido para ese array multidimensional?
como el indice no ha sido definido imprime un numero muy grande, este numera es la direccion que el programa le da a esa posicion del arreglo
*/
