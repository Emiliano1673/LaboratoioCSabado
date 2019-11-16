#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char s[20];
	char t[20];
	scanf("%[^\n]%*c", s);	
	int i=0;
	for (i=0;i<20;i++){
		t[i]=s[i];
	}
	
	printf("%s",t);
	
	FILE *caso;
	int a,b;
		
	scanf("%d%d", &a, &b);	
	caso=fopen("archivo.txt", "a+");
	fprintf(caso,"%d\n",a);
	fprintf(caso,"%d\n",b);
	fclose(caso);
	
	/*caso=fopen("archivo.txt", "r");
	while(1){
		c = fgetc(caso);
      if( feof(caso) ) { 
         break ;
      }
      printf("%c", c);
   }
   fclose(caso);
	*/
	
	//scanf("%[^\n]%*c", s);
	
	FILE *num;
	num=fopen("archivo2.txt", "a+");
	fprintf(num,"La suma de %d + %d es: %d\n",a,b,a+b);
	fclose(num);
	
	return 0;
}
