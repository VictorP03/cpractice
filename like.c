#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* likes(size_t n, const char *const names[n]) {
    char* buf;
    buf = (char *)malloc(400 * sizeof(char));
    if (buf == NULL) {
        return NULL;
    }
    switch (n) {
        case 0: {sprintf(buf, "no one likes this"); break;}
        case 1: {sprintf(buf, "%s likes this", names[0]); break;}
        case 2: {sprintf(buf, "%s and %s like this", names[0], names[1]); break;}
        case 3: {sprintf(buf, "%s, %s and %s like this", names[0], names[1], names[2]); break;}
        default: {sprintf(buf, "%s, %s and %zu others like this", names[0], names[1], n - 2); break;} 
    }
    
    return buf;
}

int main() {
    char* buf;
    const char *const names[4] = {"John", "Mike", "Nick", "Jason"};
    buf = likes(4, names);
    if (buf == NULL) {                                                                                                                                                                       
        return -1;                                                                                                                                                                           
    }
    printf("%s", buf);
    free(buf);
    return 0;
}
