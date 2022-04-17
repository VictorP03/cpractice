#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long zeros(long n) {
	long fact = 0;
	int i;
	for(i = 5; n / i > 0; i*= 5) {
		fact += n / i;
	}
  return fact;
}

int main() {
	printf("%ld", zeros(100));
}
