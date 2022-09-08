#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fa;
	float c;
	printf("saisir la valeur de la temperateur en fahrenheit  ");
	scanf("%d",&fa);
	c=(fa-32)/1.8;
	if(c>30){
		printf("la sensation ressentie tres chaud");
	}else if(c>20){
		printf("la sensation ressentie  chaud");
	}else if(c>10) {
		printf("la sensation ressentie froid");	
	}else {
		printf("la sensation ressentie tres froid");
	}
	return 0;
	
}
