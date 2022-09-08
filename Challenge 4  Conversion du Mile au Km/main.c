#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mile;
	double mettre,km;
	printf("saisir la distance en Mile");
	scanf("%d",&mile);
	km=mile/1.609;
	mettre=km*1000;
	printf("la distance en mettre est : %f",mettre);
	return 0;
}
