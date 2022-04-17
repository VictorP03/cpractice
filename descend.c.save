#include <stdio.h>                                                                                                                                                                           
#include <stdlib.h>                                                                                                                                                                          
                                                                                                                                                                                             
int main(void) {                                                                                                                                                                            
  int size, i, j, placeholder;                                                                                                                                                               
  printf("input size of array: \n");                                                                                                                                                         
  scanf("%d", &size);                                                                                                                                                                        
  int* arr;
  arr = (int*)malloc(size * sizeof(int));
  for (i = 0; i < size; i++) {                                                                                                                                                               
    printf("element %d = ", i + 1);                                                                                                                                                          
    scanf("%d", &arr[i]);                                                                                                                                                                    
  }                                                                                                                                                                                          
  for (i = 0; i < size; i++) {                                                                                                                                                               
    for (j = i + 1; j < size; j++) {                                                                                                                                                         
      if (arr[j] > arr[i]) {                                                                                                                                                                 
        placeholder = arr[i];                                                                                                                                                                
        arr[i] = arr[j];                                                                                                                                                                     
        arr[j] = placeholder;                                                                                                                                                                
      }                                                                                                                                                                                      
    }                                                                                                                                                                                        
  }                                                                                                                                                                                          
  for (i = 0; i < size; i++) {                                                                                                                                                              
    printf("%d ", arr[i]);                                                                                                                                                                   
  }                                                                                                                                                                                          
  return 0;                                                                                                                                                                                  
}        
