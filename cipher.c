// chiffrement.c
#include "cipher.h"

void simple_encrypt(const char *input, char *output) {
    int i = 0;
    while (input[i] != '\0') {
        output[i] = input[i] + 1;  // décalage simple
        i++;
    }
    output[i] = '\0';
}

