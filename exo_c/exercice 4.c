#include <stdio.h>

int main() {
	
	int num1, num2;
	
	printf("entrer les duex nombre separer par ( ) espace: ");
	scanf("%d%d", &num1, &num2);
	
	if (num1 > num2) {
		printf("%d", num1);
	} else if (num1 < num2) {
		printf("%d", num2);
	} else {
		printf("equality");
	}
	return 0;
	
}