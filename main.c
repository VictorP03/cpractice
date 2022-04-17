#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>

int main() {
	int i;
	int arr[10];

	for (i = 0; i < 10; i++) {
		printf("voeg element %d toe ", i);
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}
