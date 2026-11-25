#include <stdio.h>
#include <ctype.h> // Potrzebne do funkcji toupper i tolower

int main() {
    char imie[50];

    printf("Podaj imie: ");
    scanf("%49s", imie);

    // Pierwsza litera na wielką
    imie[0] = toupper(imie[0]);

    // Pozostałe litery na małe
    for (int i = 1; imie[i] != '\0'; i++) {
        imie[i] = tolower(imie[i]);
    }

    printf("Poprawione imie: %s\n", imie);

    return 0;
}