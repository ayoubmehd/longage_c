#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, j, k, n, nbEtoil, premier;
		
		
	printf("Enter un nombre entier: ");
	scanf("%d", &n);
	
	system("cls");
	

	
	
	for (i = 1; i <= n; i++) {
		
		nbEtoil = 2*i - 1;
		
		premier = 1;
		
		for (k = 2; k <= nbEtoil / 2; k++) {
			if (nbEtoil % k == 0) {
				premier = 0;
				break;
			}
		}
		
		if (premier == 1) {
			for (j = n - i; j > 0; j--) {
				
				printf(" ");
				
			}
			for (j = 1; j <= 2*i - 1; j++) {
				
				printf("*");
				
			}
			
			printf("%d\n", nbEtoil);
		}
		
		
	}
		
	
	
	return 0;
}
