#include <stdio.h>
#include <string.h>
#include "cipher.h"

int main() {
    char text[100];
    int key;

    printf("Texte à chiffrer : ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // enlever le saut de ligne

    printf("Clé : ");
    scanf("%d", &key);

    encrypt(text, key);
    printf("Texte chiffré : %s\n", text);

    decrypt(text, key);
    printf("Texte déchiffré : %s\n", text);

    return 0;
}
