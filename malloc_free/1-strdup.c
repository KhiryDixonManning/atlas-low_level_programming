#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str) {
    if (str == NULL) {
        return NULL; // Return NULL if input string is NULL
    }

    // Allocate memory for the duplicated string
    char *duplicate = (char *)malloc(strlen(str) + 1);
    if (duplicate == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    // Copy the content of the input string to the newly allocated memory
    strcpy(duplicate, str);

    return duplicate;
}

int main() {
    char original[] = "Hello, world!";
    char *duplicate = _strdup(original);

    if (duplicate != NULL) {
        printf("Duplicated string: %s\n", duplicate);
        free(duplicate); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

