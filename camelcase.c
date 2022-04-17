#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>

char* solution(const char *camelCase) {
	int i;
	int counter = 0;
	char* newString;
	for (i = 0; i < strlen(camelCase); i++) {
		if (isupper(camelCase[i])) {
			counter++;
		}
	}
	
	newString = (char *)malloc((strlen(camelCase) + counter) * sizeof(char));
	if (newString == NULL) {
		return NULL;
	}

	int secCounter = 0;

	for (i = 0; i < strlen(camelCase); i++) {
		if (isupper(camelCase[i])) {
			newString[secCounter] = ' ';
			newString[secCounter + 1] = camelCase[i];
			secCounter+=2;
		} else {
			newString[secCounter] = camelCase[i];
			secCounter++;
		}
	}

	return newString;
}

int main() {
	char* newString; 
	newString = solution("bahfahhBdfhchggd");
	if (newString == NULL) {
		return -1;
	}
	printf("%s\n", newString);
	free(newString);
	return 0;
}
