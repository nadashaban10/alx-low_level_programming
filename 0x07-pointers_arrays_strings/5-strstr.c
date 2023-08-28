#include "main.h"
/**
 *
 *
 *
 *
 */
#include <stdio.h>

char *_strstr(char *haystack, char *needle) {
    int i = 0;
    int j;
    char *p;

    while (needle[i] != '\0')
        i++;

    while (*haystack != '\0') {
        for (j = 0; haystack[j] != '\0'; j++) {
            if (needle[j] == haystack[j]) {
                p = (needle);
                return p;
            }
        }
        haystack++;
    }
    
    return NULL;
}

