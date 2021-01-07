#include <stdio.h>

int main() {
	
	float arr[] = { 1, 3.44, 7, 8, 23, 88, 100 }, search = 23;
	
	int i, size = 7, searchPos = -1, min = 0, max = size - 1, middle;
	
	while(min <= max) {
		middle = (min + max) / 2;
		
		if (search == arr[middle]) {
			searchPos = middle;
			break;
		} else if (search > arr[middle]) {
			min = middle + 1;
		} else {
			max = middle - 1;
		}
	}
	
	if (searchPos == -1) {
		printf("%.2f does not exist", search, searchPos);
	} else {
		printf("%.2f is in position %d", arr[searchPos], searchPos);
	}
	
	return 0;
}
