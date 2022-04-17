#include <stdio.h>    
#include <stdlib.h>  
#include <stddef.h>

size_t countBits(unsigned value) {
	int placeValue = value;
	int counter = 0;
	int i;
	int *arr;
	int placeholder = 0;
	while (placeValue > 0) {
		placeValue /= 2;
		counter++;
	}
	arr = (int *)malloc(counter * sizeof(int));
	
	for (i = 0; value > 0; i++) {
		arr[i] = value % 2;
		value /= 2;
	}

	for (i = 0; i < counter; i++) {
		placeholder+=arr[i];
	}

	free(arr);
	return placeholder;
}

int main() {
	int d;
	
	printf("enter a positive number: ");
	scanf("%d", &d);
	printf("%lu\n", countBits(d));
}


