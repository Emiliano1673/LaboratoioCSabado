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

int primo(int x);								//declaracion de la primera funcion para identificar numeros primos
int potencia(int a, int b);						//declaracion de la segunda funcion para elevar potencias

int main(int argc, char *argv[]) {				//funcion principal main
	
	int a,b,c;									//declaracion de variables
	printf("\nIntroduzca un numero: ");
	scanf("%d", &a);							//se le pide un numero al usuario
	primo(a);									//se usa la funcion primo para evaluar si el numero pedido es primo
	
	printf("\n\nIntroduzca el numero base: ");	//se pide el numero de la base
	scanf("%d", &b);
	printf("Introduzca el numero potencia: ");	//se pide el numero de la potencia al usuario
	scanf("%d", &c);
	potencia(b,c);								//se evaluan estos dos numero en la funcion potencia para calcular b elevado a la c
	return 0;
}												//fin del main
//**************ACTIVIDAD1*****************
int primo(x){									//declaracion de funcion primo
	int i,z=0;									//variable i para usar el for y variable z para evaluar si es primo el numero x
	if (x==1)									//se evalua el caso especial de si x=1, en caso verdadero, no es primo
		printf("No es primo");
	else{										//en caso de que x no sea 1
		for (i=2;i<=x;i++){						//se evalua con i=2, mientras i sea menor al numero x
			if (x%i==0)							//se evaluara la division del numero x entre i, si el cociente es igual a 0 en mas de una
				z++;							//ocasion, quiere decir que el numero es divisible entre si mismo y otro mas, por lo
		}										//que no es primo y el valor de z sera mayor a 1, si el cociente da a 0 solo una vez
		if (z==1)								//el numero solo es divisible entre si mismo, sera primo y z=1
			printf("Es primo");					//se imprime el mensaje
		else if (z>1)
			printf("No es primo");				//en caso de que z sea mayor a 1, no es primo
	}
}												//fin de primo
//**************ACTIVIDAD2*****************	
int potencia(a,b){								//declaracion de funcion potencia, con dos variables, la base y el exponente
	int i=2,res=a;								//declaracion de i y res, res es el valor original de a
	for (i;i<=b;i++){							//en el ciclo, mientras i sea menor al exponente, el valor base se seguira multiplicando
		a=a*res;								//por su valor original guardado en res, y el valor a se convertirá en el resultado
	}
	printf("El numero %d a la potencia %d es: %d",res,b,a);		//se imprime el resultado de elevar a a la potencia b
}																//fin de potencia
