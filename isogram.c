#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool IsIsogram(char *str) 
{
	int i, j;
	int length = strlen(str);
	for (i = 0; i < length; i++) {
		for (j = i + 1; j < length; j++) {
			if (tolower(str[i]) == tolower(str[j])) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	printf("%d", IsIsogram("a_string"));
}
