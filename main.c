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
	
	int i,n;											//Declaracion de variables enteras
	float suma=0,prom;									//declaracion de variables float, estas se usarán para sacar el promedio con valores decimales
	
	for(i=1;i<11;i++){									//inicio del for, se usa i como el numero de calificacion que se esta pidiendo
		printf("Introduce la calificacion %d: ",i);		//se le pide la calificación i al usuario,
		scanf("%d", &n);								//el usuario introduce la calificacion y se guarda en la variable n
		suma=suma+n;									//la variable suma va almacenando la suma de todas las calificaciones introducidas y guardadas en n
	}													//fin del for
	prom=suma/10;										//El promedio se guarda en la variable prom que es la division entre 10 de la variable suma
	printf("\nCalificacion final: %.2f", prom);			//se imprime la variable prom, es decir, la calificacion final
	if (prom>7||prom==7)								//si esta es igual o mayor a 7 se imprime aprobado
		printf("\nAprobado");				
	else
		printf("\nReprobado");							//en caso contrario se imprime reprobado
	
	
	
	int base,pot,x;										//variables tipo int, la base a utilizar, la potencia y la x que se utiliza para elevar la base a la potencia
	
	fflush(stdin);										//se limpia el buffer con un fflush
	printf("\nEscribe la base del numero: ");			//se le pide al usuario la base
	scanf("%d", &base);
	printf("\nEscribe la potencia del numero ");		//se pide la potencia a la que se va a elevar
	scanf("%d", &pot);
	x=base;												//la base se guarda en x, puesto que x sera fija, mientras que base estara constantemente cambiando
	
	for (i=1;i<pot;i++)									//en el for, el contador i se ira incrementando mientras sea menor a potencia, lo que significa que la base se 
		base=x*base;									//multiplicara por si misma las veces que pot lo indique
														//la variable base se ira incrementando constantemente mientras se multiplique a si misma por x, su valor original
	printf("\n%d", base);								//se imprime el resultado, la base elevada a la potencia indicada
	
	return 0;											
}														//fin del main
