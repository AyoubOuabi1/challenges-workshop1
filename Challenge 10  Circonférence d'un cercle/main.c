#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r,c;
	printf("saisir le rayon du cercle \n");
	scanf("%f",&r);
	c=2*3.14*r;
	printf("la circonférence du cercle est : %f",c);
	return 0;
}
