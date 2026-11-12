#include <stdio.h>

#define ROZMIAR 5

double oblicz_srednia(int tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }
    return (double)suma / rozmiar;
}

int main() {
    int tablica[ROZMIAR];

    printf("podaj %d liczb calkowitych:\n", ROZMIAR);
    for (int i = 0; i < ROZMIAR; i++) {
        printf("Liczba %d: ", i + 1);
        if (scanf("%d", &tablica[i]) != 1) {
            printf(" niepoprawna wartosc.\n");
            return 1;
        }
    }

    double srednia = oblicz_srednia(tablica, ROZMIAR);
    printf("\nSrednia podanych liczb wynosi: %.2f\n", srednia);

    printf("liczby wieksze od sredniej: ");
    int znaleziono = 0;
    for (int i = 0; i < ROZMIAR; i++) {
        if (tablica[i] > srednia) {
            printf("%d ", tablica[i]);
            znaleziono = 1;
        }
    }

    if (!znaleziono) {
        printf("brak");
    }
    printf("\n");

    return 0;
}