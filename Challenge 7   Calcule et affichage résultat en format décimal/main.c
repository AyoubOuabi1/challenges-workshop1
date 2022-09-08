#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,choix;
	float res;
	printf("saisir la valeur de A : ");
	scanf("%d",&a);
	printf("saisir la valeur de B : ");
	scanf("%d",&b); 
	printf("choise votre operation : \n ");
	printf("pour choise a+b ecrire 1 \n ");
	printf("pour choise a-b ecrire 2 \n ");
	printf("pour choise a*b ecrire 3 \n ");
	printf("pour choise a/b ecrire 4 \n ");
	printf("pour choise a%b ecrire 5 \n ");
	scanf("%d",&choix);
	switch (choix){
		case 1:
			res=a+b;  
    		printf(" votre res est : %f", res);  
    		break;
    	case 2:
			res=a-b;  
    		printf(" votre res est : %f", res);  
    		break;	
		case 3:
			res=a*b;  
    		printf(" votre res est : %f", res);  
    		break;
    	case 4:
			res=a/b;  
    		printf(" votre res est : %f", res);  
    		break;
		case 5:
			res=a % b;  
    		printf(" votre res est : %f", res);  
    		break;		
	}
	return 0;
}
