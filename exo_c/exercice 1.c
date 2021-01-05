#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, j, n;
	
	int exit = 0;
	char charExit;
	
	while (exit == 0) {
		
		
		printf("Enter un nombre entier: ");
		scanf("%d", &n);
		
		system("cls");
		

		
		
		for (i = 1; i <= n; i++) {
			
			for (j = n - i; j > 0; j--) {
				
				printf(" ");
				
			}
			
			for (j = 1; j <= 2*i - 1; j++) {
				
				printf("*");
				
			}
			
			printf("\n");
			
		}
		
		getchar();
		
	}
	
	
	return 0;
}
