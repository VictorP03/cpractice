#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n]) {
    int smallest = numbers[0];
    int i;
    int pos = 0;
    int* arr;
    int counter = 0;
    arr = (int *)malloc((n - 1) * sizeof(int));
    
    for (i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
            pos = i;
        }
    }

    for (i = 0; i < n; i++) {
        if (i == pos) {
            continue;
        } else {
            arr[counter] = numbers[i];
            counter++;
        }
    }
    
    int scndsmallest = arr[0];

    /* for (i = 0; i < n - 1; i++) {
        printf("%d", arr[i]);
    } */

    for (i = 1; i < n - 1; i++) {
        if (arr[i] < scndsmallest) {
            scndsmallest = arr[i];
        }
    } 

    return smallest + scndsmallest;
}
int main() {
    const int numbers[5] = {5, 8, 12, 19, 22};
    // sum_two_smallest_numbers(5, numbers);
    printf("%ld\n", sum_two_smallest_numbers(5, numbers));
}
                                                                                                                                                                                            
                                                                                                                                                                                            
                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                            
                                                            
