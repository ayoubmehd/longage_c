#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, j;
	
	for (i = 0; i <= 20; i++) {
		printf("===== %d =====\n", i);
		for (j = 0; j <= 20; j++) {
			printf("%d X %d = %d\n", i, j, i * j);	
		}
	}
	
	return 0;
}
