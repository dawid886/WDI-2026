#include <stdio.h>
#include <ctype.h>

int main() {
    char tekst[1000];
    int licznik[256] = {0};
    int i;

    printf("podaj ciag znakow: ");
    if (fgets(tekst, sizeof(tekst), stdin) != NULL) {

        for (i = 0; tekst[i] != '\0'; i++) {
            unsigned char znak = (unsigned char)tekst[i];

            if (isalpha(znak)) {
                licznik[znak]++;
            }
        }

        printf("\nLiczba wystapien poszczegolnych liter:\n");
        for (i = 0; i < 256; i++) {
            if (licznik[i] > 0) {
                printf("'%c' : %d\n", i, licznik[i]);
            }
        }
    }

    return 0;
}