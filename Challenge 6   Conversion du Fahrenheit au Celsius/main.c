#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fa;
	float c;
	printf("saisir la valeur de la temperateur en fahrenheit  ");
	scanf("%d",&fa);
	c=(fa-32)/1.8;
	printf("la valeur de la temperateur en degre Celsius %f",c);
	return 0;
}
