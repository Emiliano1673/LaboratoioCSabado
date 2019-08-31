#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//***
//ACT1

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
//ACT2

	int A=5,B=3,C=-12;
	if (A>3)
		printf("\n\nA>3 es verdadero");
	else 
		printf("\n\nA>3 es falso");
	if (A>C)
		printf("\nA>C es verdadero"); 
	else
		printf("\nA>C es falso");
	if (B!=C)
		printf("\nB es diferente de C, es verdadero");
	else 
		printf("\nB es diferente de C, es falso");
	if (A==3)
		printf("\nA=3, es verdadero");
	else
		printf("\nA=3, es falso");
	if (A*B==15)
		printf("\nAxB=15, es verdadero");
	else	
		printf("\nAxB=15, es falso");
	if ((C/B)<A)
		printf("\nC/B<A, es verdadero");
	else
		printf("\nC/B<A, es falso");
	if ((C/B)==-10)
		printf("\nC/B=-10, es verdadero");
	else
		printf("\nC/B=-10, es falso");
	if (A+B+C==5)
		printf("\nA+B+C=5, es verdadero");
	else
		printf("\nA+B+C=5, es falso");
	if (((A+B)==8)&&(A-B==2))
		printf("\nA+B=8 y A-B=2, es verdadero");
	else
		printf("\nA+B=8 y A-B=2, es falso");
	if ((A+B)==8||(A-B==6))
		printf("\nA+B=8 o A-B=6, es verdadero");
	else
		printf("\nA+B=8 o A-B=6, es falso");
	if ((A>3)&&(B>3)&&(C>3))
		printf("\nA>3 y B>3 y C>3, es verdadero");
	else
		printf("\nA>3 y B>3 y C>3, es falso");
	
//***
//ACTEXTRA
	
	int valorA,valorB,valorC;
	printf("\n\nIntroduce el valor A: ");
	scanf("%d",&valorA);
	printf("\nIntroduce el valor B: ");
	scanf("%d",&valorB);
	printf("\nIntroduce el valor C: ");
	scanf("%d",&valorC);
		
	if (valorA>3)
		printf("\nA>3 es verdadero");
	else
		printf("\nA>3 es falso");
	if (valorA>valorC)
		printf("\nA>C es verdadero"); 
	else
		printf("\nA>C es falso");
	if (valorB!=valorC)
		printf("\nB es diferente de C, es verdadero");
	else 
		printf("\nB es diferente de C, es falso");
	if (valorA==3)
		printf("\nA=3, es verdadero");
	else
		printf("\nA=3, es falso");
	if (valorA*valorB==15)
		printf("\nAxB=15, es verdadero");
	else	
		printf("\nAxB=15, es falso");
	if ((valorC/valorB)<valorA)
		printf("\nC/B<A, es verdadero");
	else
		printf("\nC/B<A, es falso");
	if ((valorC/valorB)==-10)
		printf("\nC/B=-10, es verdadero");
	else
		printf("\nC/B=-10, es falso");
	if (valorA+valorB+valorC==5)
		printf("\nA+B+C=5, es verdadero");
	else
		printf("\nA+B+C=5, es falso");
	if (((valorA+valorB)==8)&&(valorA-valorB==2))
		printf("\nA+B=8 y A-B=2, es verdadero");
	else
		printf("\nA+B=8 y A-B=2, es falso");
	if ((valorA+valorB)==8||(valorA-valorB==6))
		printf("\nA+B=8 o A-B=6, es verdadero");
	else
		printf("\nA+B=8 o A-B=6, es falso");
	if ((valorA>3)&&(valorB>3)&&(valorC>3))
		printf("\nA>3 y B>3 y C>3, es verdadero");
	else
		printf("\nA>3 y B>3 y C>3, es falso");
	
	return 0;
}
