#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num1, num2;
	
	printf("Entrer le premier numero: ");
	scanf("%d", &num1);
	printf("Entrer la deuxieme numero: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
		printf("%d", num1);
	} else if (num1 < num2) {
		printf("%d", num2);
	} else {
		printf("nombres Egal");
	}
	
	return 0;
}
