// test.c
#include <stdio.h>
#include "cipher.h"

int main() {
    const char *message = "abc";
    char result[100];

    simple_encrypt(message, result);

    if (result[0] == 'b' && result[1] == 'c' && result[2] == 'd') {
        printf("Test passed\n");
        return 0;
    } else {
        printf("Test failed: got %s\n", result);
        return 1;
    }
}

