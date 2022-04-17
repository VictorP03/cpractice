#include <stdio.h>
#include <stdlib.h>

int main() {
   int i, j, num, counter;
	 int *arr;
	 int *freq;
	 printf("number of elements in array: ");
	 scanf("%d", &num);
	 arr = (int *)malloc(num * sizeof(int));
	 freq = (int *)malloc(num * sizeof(int));
	 
	 for (i = 0; i < num; i++) {
		 printf("element %d - ", i);
		 scanf("%d", &arr[i]);
		 freq[i] = -1;
	 }

	 for (i = 0; i < num; i++) {
		 counter = 1;
		 for (j = i + 1; j < num; j++) {
			 if (arr[i] == arr[j]) {
				 counter++;
				 freq[j] = 0;
			 }
		 }
		 if (freq[i] != 0) {
			 freq[i] = counter;
		 }
	 }
	 for (i = 0; i < num; i++) {
		 if (freq[i] != 0) {
			 printf("frequency of element %d = %d\n", arr[i], freq[i]);
		 }
	 }
}
	 

