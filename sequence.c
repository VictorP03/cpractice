#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
	int i;
	int placeholder = 0;
	for (i = start; i <= end; i += step) {
		placeholder += i;
	}	
  return placeholder;
}

int main() 
{
	printf("%d\n", sequence_sum(2,6,2));
}
