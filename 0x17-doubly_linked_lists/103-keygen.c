#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEY_LENGTH 6

void generate_key(char *username, char *key) {
    int sum = 0;
    size_t len = strlen(username);
    size_t i;

    /* Calculate the sum of ASCII values of characters in the username */
    for (i = 0; i < len; i++) {
        sum += username[i];
    }

    /* Generate key based on the sum */
    snprintf(key, KEY_LENGTH + 1, "%06d", sum);
}

int main(int argc, char *argv[]) {
    char key[KEY_LENGTH + 1]; /* Declaration moved to the beginning */

    if (argc != 2) {
        fprintf(stderr, "Usage: %s username\n", argv[0]);
        return EXIT_FAILURE;
    }

    generate_key(argv[1], key);
    printf("%s\n", key);

    return EXIT_SUCCESS;
}
