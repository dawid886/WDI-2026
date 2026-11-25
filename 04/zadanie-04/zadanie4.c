#include <stdio.h>
#include <ctype.h>

int main() {
    char slowo1[1000], slowo2[1000];
    int licznik[256] = {0};
    int i;

    printf("Podaj pierwsze slowo: ");
    if (fgets(slowo1, sizeof(slowo1), stdin) == NULL) {
        return 1;
    }

    printf("Podaj drugie slowo: ");
    if (fgets(slowo2, sizeof(slowo2), stdin) == NULL) {
        return 1;
    }

    for (i = 0; slowo1[i] != '\0'; i++) {
        unsigned char znak = (unsigned char)slowo1[i];
        if (isalpha(znak)) {
            znak = (unsigned char)tolower(znak);
            licznik[znak]++;
        }
    }

    for (i = 0; slowo2[i] != '\0'; i++) {
        unsigned char znak = (unsigned char)slowo2[i];
        if (isalpha(znak)) {
            znak = (unsigned char)tolower(znak);
            licznik[znak]--;
        }
    }

    for (i = 0; i < 256; i++) {
        if (licznik[i] != 0) {
            printf("nie sa anagramami.\n");
            return 0;
        }
    }

    printf("slowa sa anagramami.\n");
    return 0;
}