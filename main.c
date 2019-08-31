#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//***
//Actividad 1

int main(int argc, char *argv[]) {
	int num1,num2;
	printf("Introduzca el primer numero: \n"); 
	scanf("%d",&num1);
	printf("Introduzca el segundo numero: \n");
	scanf("%d",&num2);
	if (num1>num2)
		printf("\nEl primer numero %d, es mayor al segundo numero %d",num1,num2);
	if (num2>num1)
		printf("\nEl segundo numero %d, es mayor al primer numero %d",num2,num1);
		else if (num1==num2)
			printf("\nLos dos numeros son iguales");
	
//**
//Actividad 2

	int A=5,B=3,C=-12;
	if (A>3)
		printf("\nA>3 es verdadero");
	else 
		printf("\nA>3 es falso");
	if (A>C)
		printf("\nA>C es verdadero"); 
	else
		printf("\nA>C es verdadero");
	if (B!=C)
		printf("\nB es diferente de C, es verdadero");
	else 
		printf("\nB es diferente de C, es falso");
	if (A==3)
		printf("\nA=3, es verdadero");
	else
		printf("\nA=3, es falso");
		
	return 0;
}
