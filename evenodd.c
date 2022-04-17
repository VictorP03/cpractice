#include <stdio.h>
#include <stdlib.h>

int main() {
	int even[10], odd[10], num, i;
	int* inArr;
	int evencounter = 0;
	int oddcounter = 0;
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &num);
  inArr = (int *)malloc(num * sizeof(int));
	for(i = 0; i < num; i++) {
		printf("element %d - ", i);
		scanf("%d", &inArr[i]);
	}

	for(i = 0; i < num; i++) {
		if (inArr[i] % 2 == 0) {
			even[evencounter] = inArr[i];
			evencounter++;
		} else {
			odd[oddcounter] = inArr[i];
			oddcounter++;
		}
	}
	printf("The even elements are: \n");
	for (i = 0; i < evencounter; i++) {
		printf("%d ", even[i]);
	}
	printf("\nThe odd elements are: \n");
	for (i = 0; i < oddcounter; i++) {                                                                                                                                         
    printf("%d ", odd[i]);                                                                                                                                                                   
  } 
}
