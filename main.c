/*
Autor: Emiliano Sanchez Campa
Fecha: 12/09/2019
Grupo: #
Horario: sabados 9 am-11 am
Matrícula: 1941551
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
*/

int main(int argc, char *argv[]) {
	
	//**************ACTIVIDAD1*****************
	char texto[20];									//variable arreglo 
	int a,c,i=0;									//declaracion de variables tipo entero

	printf("Introduce una cadena de texto: ");		//se pide al usuario introducir una cadena de texto al arreglo de tipo char
	scanf("%s",&texto);								//se introduce la cadena de caracteres
	a=strlen(texto);								//se usa la funcion strlen para sacar la longitud o numero de caracteres del arreglo y se guarda en la variable a
	a=a-1;											//se le resta 1 a a, ya que se usara como variable contadora
	
	while(i<=a){									//mientras i (variable contadora) sea menor a a, el proceso se repetira, estas ds variables representan las posiciones del arreglo
		if (texto[i]==texto[a]){					//como i esta inicializada en 0, se compara el caracter de la primera posicion con el de la ultima, en la posicion a
			i++;									//si es verdadero, se le suma uno a i y se resta 1 a a, esto es para comparar los siguientes pares de caracteres en la palabra
			a--;									//ya se comparo el primer caracter con el ultimo, despues el segundo con el penultimo y asi sucesivamente
			c=1;									//c=1
		}
		else if (texto[i]!=texto[a]){				//en caso de que la comparacion sea falsa, se da un valor grande a i para salir del ciclo ya que automaticamente la palabra
			i=10000;								//no es palindromo
			c=2;									//c=2
		}
	}
 	
	if(c==1)										//si c=1, quiere decir que la primera condicon del ciclo es verdadera para el string introducido y por lo tanto es palindromo
		printf("\nEl texto es un palindromo");
	else if(c==2)									//en caso contrario si c=2, el string no es un palindromo
		printf("\nEl texto no es un palindromo");
	
	//**************ACTIVIDAD2*****************
	char array[20];									//arreglo para la cadena de texto
	int d,r=0,z=0;								//variables tipo entero
	i=0;											//variable contadora usada en la actividad anterior, se reinicia a 0
	
	printf("\n\nIntroduce una cadena de texto: ");	//se pide una cadena de texto al usario
	fflush(stdout);									//se limpia el buffer
	scanf("%s",&array);								
	d=strlen(array);								//se obtiene la longitud de la cadena de texto introducida y se guarda en d
	d=d-1;											//se le resta 1 a d
	while(i<=d){									//i=0, representa la primera posicion del string, d representa la ultima posicion
		for(z=0;z<=d;d--){							//z=0, representa el caracter inicial comparandose con el caracter i, mientras z>=d, significa que se va a comparar para todos los caracteres de la cadena de texto
			if (array[i]==array[d])					//se compara si el caracter en la posicion i es igual al caracter en la posicion d	
				r++;								//en caso verdadero, r inicializado en 0, aumenta en 1, esta variable esta contando el numero de veces que se repite una letra
		}
		printf("\nLetra %c: %d",array[i],r);		//al final del for, ya se comparo el caracter de la posicion i con todos los demas caracteres, por lo que se imprime el caracter, junto con el numero de repeticiones
		i++;										//se le suma 1 a i, esto para ahora empezar a comparar el caracter en la segunda posicion con los demas caracteres
		d=(strlen(array))-1;						//se reinicia el valor de d
		r=0;										//se reinicia el valor de r para volver a contar
	}												//como el valor de i es el unico que no se reinicia, el proceso continuara hasta comparar todas los caracteres de la cadena de texto
	return 0;
}													//fin del main

