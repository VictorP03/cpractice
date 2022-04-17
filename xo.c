#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool xo (const char* str)
{
  int i; 
  int xHolder = 0; 
  int oHolder = 0;
  for (i = 0; i < strlen(str); i++) {
    if (tolower(str[i]) == 'x') {
      xHolder++;
    } else if (tolower(str[i]) == 'o') {
      oHolder++;
    }
  }
  
  if (oHolder == xHolder) {
    return true;
  } else {
    return false;
  }
}

int main() {
	printf("%d\n", xo("xxoo"));
}
