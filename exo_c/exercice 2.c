#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, j, limit = 20;
	
	printf("    ");
	
	for (i = 0; i <= limit; i++) {
		
		if (i - 1 < 10) {
			printf("   ");
		} else {
			printf("  ");
		}
		
		printf("%d", i);	
	}
	
	printf("\n");
	
	
	for (i = 0; i <= limit; i++) {
		
		printf("%d", i);
		if (i < 10) {
			printf("  |");
		} else {
			printf(" |");
		}
		for (j = 0; j <= limit; j++) {
				
			int temp = i * j;
			
			int prevTemp = i * (j - 1); 
					
			
			if (prevTemp < 10) {
				printf("   ");	
			} else if (prevTemp >= 10 && prevTemp < 100) {
				printf("  ");
			} else if (prevTemp >= 100) {
				printf(" ");
			}
			//printf("(%d)", prevTemp);
			printf("%d", temp);
			
		}
		printf("\n");
	
	}
	
	return 0;
}
