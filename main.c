#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
\	
[]
*/

int main(int argc, char *argv[]) {
	
	//**************ACTIVIDAD1*****************
	char texto[20];
	int a,c,i=0;
	/*
	printf("Introduce una cadena de texto: ");
	scanf("%s",&texto);
	a=strlen(texto);
	a=a-1;
	
	while(i<=a){
		if (texto[i]==texto[a]){
			i++;
			a--;
			c=1;
		}
		else if (texto[i]!=texto[a]){
			i=10000;
			c=2;
		}
	}
 	
	if(c==1)
		printf("\nEl texto es un palindromo");
	else if(c==2)
		printf("\nEl texto no es un palindromo");
	
	return 0;
	*/
	//**************ACTIVIDAD2*****************
	char array[20];
	int d,f,array2[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	i=0;
	
	printf("\n\nIntroduce una cadena de texto: ");
	scanf("%s",&array);
	d=strlen(array);
	d=d-1;
	f=d;
	while(i<=d){
		for(i=0;i<=d;d--){
			if(array[i]==array[d])
				array2[i]++;
		i++;	
		d=f;
		}	
	}

	printf("%c",array[0]);
	printf("		%d",array2[0]);
	
}


