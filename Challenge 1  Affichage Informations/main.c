#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nom[30],prenom[10],sexe[10],tele[20];
	int age;
 	printf("saisir votre Nom ");
	scanf ("%s",&nom);
	printf("saisir votre Prenom");
	scanf ("%s",&prenom);
	printf("saisir votre age");
	scanf("%d",&age);
	printf("saisir votre sexe");
	scanf("%s",&sexe);
	printf("saisir votre numero de telephone");
	scanf("%s",&tele);
	printf("votre infos: \n Nom et prenom : %s %s \n votre age : %d \n votre sexe : %s \n votre numero de telephone : %s",nom,prenom,age,sexe,tele);
	return 0;
}
