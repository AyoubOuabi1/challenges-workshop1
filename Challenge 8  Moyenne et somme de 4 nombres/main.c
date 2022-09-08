#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,somme;
	float my;
	printf("saisir la valeur de A");
	scanf("%d",&a);
	printf("saisir la valeur de B");
	scanf("%d",&b);
	printf("saisir la valeur de C");
	scanf("%d",&c);
	printf("saisir la valeur de D");
	scanf("%d",&d);
	somme=a+b+c+d;
	printf(" la somme des nombres A,B,C et D : %d \n",somme);
	my=somme/4;
	printf(" la moyenne des nombres A,B,C et D : %f \n",my);
	return 0;
}
