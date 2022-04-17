#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* AscOrDesc(int num) {
	int i;
	int* arr;
	int counter = 0;
	int placeNum = num;
	
	while (placeNum > 0) {
		placeNum /= 10;
		counter++;
	}

	arr = (int *)malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++) {
		arr[i] = num % 10;
		num /= 10;
	}

  if (counter == 2) {
		if (arr[0] > arr[1]) {
			return "number is ascending";
		} else {
			return "number is descending";
		}
	}


	if (arr[0] >= arr[1]) {
		for (i = 1; i < counter - 1; i++) {
			if (arr[i] < arr[i + 1]) {
				return "not ascending and not descending";
			}
		}
		return "number is ascending";
	} else {
		for (i = 1; i < counter - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				return "not ascending and not descending";
			}
		}
		return "number is descending";
	}
} 

int main() {
	printf("%s", AscOrDesc(2310));
}
