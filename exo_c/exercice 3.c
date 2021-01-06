#include<stdio.h>

int main() {
	
	float valuer, res;
	
	int choix;
	
	printf("1 - MAD\n");
	printf("2 - USD\n");
	printf("3 - EURO\n");
	
	scanf("%d", &choix);
	
	printf("Entrer la valuer: ");
	scanf("%f", &valuer);
	
	
	
	switch(choix) {
		case 1: 
			printf("Valeur en EURO est: %f EURO", valuer * 0.092);
			printf("Valeur en USD est: %f $", valuer * 0.11);
			break;
		case 2:
			printf("Valeur en MAD est: %f MAD", valuer / 0.11);
			printf("Valeur en EURO est: %f EURO", valuer / 1.23);
			break;
		case 3:
			printf("Valeur en MAD est: %f MAD", valuer * 10.82);
			printf("Valeur en USD est: %f $", valuer * 1.23);
			break;
	}
	
	return 0;
}
