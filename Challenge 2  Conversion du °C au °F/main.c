#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c;
	float fa;
	printf("saisir la valeur de la temperateur en degre Celsius  ");
	scanf("%d",&c);
	fa=(c*1.8) + 32;
	printf("la temperateur en fahrenheit est : %f",fa);
	return 0;
}
