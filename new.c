#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main() {
	int arr[4] = {4, 4, 1, 5};

	int target = 8;
	int placeArray[2];
	int i, j;
	int counter = 0;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 4; j++) {
			if (target - arr[i] == arr[j]) {
				placeArray[0] = i;
				placeArray[1] = j;
				break;
			}
		}
	}
	for (i = 0; i < 2; i++) {
		printf("%d ", placeArray[i]);
	}
}
