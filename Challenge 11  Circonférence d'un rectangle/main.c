#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float lon,lar,c;
	printf("saisir longeur \n");
	scanf("%f",&lon);
	printf("\n saisir largeur \n");
	scanf("%f",&lar);
	c=2*(lon+lar);
	printf("la circonférence d'un rectangle est : %f",c);
	return 0;
}
