#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int stray(size_t n, int arr[n]) {
		int counter = 1;
		int i, place;
		for (i = 1; i < n; i++) {
			if (arr[i] == arr[0]) {
				counter++;
			} else {
				place = i;
			}
		}
		if (counter == 1) {
			return arr[0];
		} else {
			return arr[place];
		}
}

int main() {
	int example[5] = {1, 1, 2, 1, 1};
	printf("%d", stray(3, example));
	return 0;
}
