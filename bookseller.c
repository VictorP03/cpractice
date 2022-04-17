#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stockSummary(char** lstOfArt, int szlst, char** categories, int szcat) {
	if (sizeof(lstOfArt) == 0 || sizeof(categories) == 0) {
		return "";
	}
	return 0;
}

int main() {
	char* art[0] = {};
	char* cat[0] = {};
	printf("%s", stockSummary(art, 0, cat, 0));
	return 0;
}
