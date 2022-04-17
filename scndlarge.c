#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i;
	int * arr;
	printf("input the size of array: ");
	scanf("%d", &num);
	arr = (int *)malloc(num * sizeof(int));
	printf("input %d elements in the array: \n", num);
	for (i = 0; i < num; i++) {
		printf("element %d - ", i);
		scanf("%d", &arr[i]);
	}
	
	int lrgest = 0;
	
	for (i = 0; i < num; i++) {
		if (arr[i] > lrgest) {
			lrgest = arr[i];
		}
	}
	
	int lrg2nd = 0;

	for (i = 0; i < num; i++) {
		if (arr[i] == lrgest) {
			continue;
		} else if (arr[i] > lrg2nd){
			lrg2nd = arr[i];
		}
	}
	printf("the second largest element in the array is %d\n", lrg2nd);
	free(arr);
	return 0;
}
