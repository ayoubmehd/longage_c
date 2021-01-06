#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, j;
	
	printf("   ");
	
	for (i = 0; i <= 10; i++) {
		printf("%d   ", i);	
	}
	
	printf("\n");
	
	
	for (i = 0; i <= 10; i++) {
		printf("%d   ", i);
		for (j = 0; j <= 10; j++) {
			if (i * j < 10) {
				printf("%d   ", i * j);	
			} else if (i * j >= 10) {
				printf("%d  ", i * j);
			} else if (i * j >= 100) {
				printf("%d ", i * j);
			}
		}
		printf("\n");
	
	}
	
	return 0;
}