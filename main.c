/*
Autor: Emiliano Sanchez Campa
Fecha: 31/08/2019
Grupo: #8
Horario: sabados 9 am-11 am
Matrícula: 1941551
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void procesar();													//se inicializa la funcion procesar
int main(int argc, char *argv[]) {
	//**************ACTIVIDAD1*****************
	char zeus[30]; 													//variable de tipo char
	
	printf("Introduce el texto a guardar en el archivo: \n");
	scanf("%[^\n]%*c", zeus);										//se guarda la cadena de texto introducida por el usuario en el array zeus
	FILE *archivo1;													//puntero archivo1
	archivo1 = fopen("archivo1.txt", "w+");							//se crea y abre el archivo1.txt 
	fprintf(archivo1, "%s\n", zeus);								//con fprintf, se guarda la cedena de texto zeus en el .txt
	fclose(archivo1);												//se cierra el archivo
	procesar();														//se invoca la funcion procesar
	
	//**************ACTIVIDAD2*****************
	FILE *fichero1;													//puntero fichero1
	int a,b,c,d;													
		
	scanf("%d%d", &a, &b);											//se leen los valores enteros, a y b
	fichero1=fopen("fichero1.txt", "w+");							//se crea el fichero1.txt
	fprintf(fichero1,"%d\n",a);										//se guardan en el txt los valores de a y b
	fprintf(fichero1,"%d\n",b);
	fclose(fichero1);												//se cierra el archivo
	
	fichero1=fopen("fichero1.txt", "rb");							//se abre el fichero1.txt, para leerlo
	while(feof(fichero1) == 0){										//mientras el contenido del fichero1.txt no se acabe
		fscanf(fichero1, "%d", &c);									//se guardan los valores numericos en las variables c y d
		fscanf(fichero1, "%d", &d);
	}
	fclose(fichero1);												//se cierra el fichero1.txt
	
	FILE *fichero2;
	fichero2=fopen("fichero2.txt", "w+");							//se crea y abre el nuevo fichero2.txt
	fprintf(fichero2,"La suma de %d + %d es: %d\n",c,d,c+d);		//se imprime el texto y la suma de las variables c y d
	fclose(fichero2);												//se cierra el fichero2
	
	return 0;														
}																	//fin del main
	
	//**************ACTIVIDAD1*****************
void procesar (){											//se define la funcion procesar
	char zora[30], hades[30];								//2 arrays de tipo char, de misma longitud que zeus
	int i,z;												
	FILE *archivo2;											//puntero archivo2, se usara para manipular el archivo1
	FILE *archivo_alreves;									//puntero archivo_alreves, se usara para crear un nuevo .txt
	
	archivo2 = fopen("archivo1.txt", "rb");					//se abre el archivo1.txt
	fscanf(archivo2, "%[^\n]%*c", &zora); 					//se lee el contenido del archivo1.txt con fscanf y se guarda en el array zora
	fclose(archivo2);										//se cierra el archivo
	
	z=strlen(zora);											//se obtiene la longitud de la cadena de texto zora
	z=z-1;													
	for (i=0;i<=z;i++){										
		hades[i]=zora[z-i];									//el ultimo valor de zora se guarda en el primer valor de hades, despues el penultimo en el segundo y consecutivamente
	}														//la cddena de texto de hades es zora al reves
	archivo_alreves=fopen("archivo_alreves.txt", "w+");		//se crea el archivo_alreves.txt
	fprintf(archivo_alreves, "%s\n", hades);				//se guarda la cadena de texto hades en el archivo_alreves.txt
	fclose(archivo_alreves);								//se cierra el archivo
	
	archivo2=fopen("archivo1.txt", "w+");					//se abre el archivo1.txt para ser modificado
	fprintf(archivo2, "procesado\n");						//se reescribe el texto procesado sobre la cadena de texto original
}
