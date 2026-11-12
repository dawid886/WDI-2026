#include <stdio.h>

#define ROZMIAR 10

// i srednia

double oblicz_srednia(int tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }
    return (double)suma / rozmiar;
}

// iii min i max

void wypisz_min_max(int tab[], int rozmiar) {
    int min = tab[0];
    int max = tab[0];

    for (int i = 1; i < rozmiar; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    printf("\nnajmniejsza liczba: %d\n", min);
    printf("\nnajwieksza liczba: %d\n", max);

}

// iv suma nieparzystych

int suma_nieparzystych(int tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] % 2 != 0) {
            suma += tab[i];
        }
    }
    return suma;
}

// v od konca
void wyswietl_od_konca(int tab[], int rozmiar) {
    printf("tablica od ostatniego elementu: ");
    for (int i = rozmiar - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    
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
    printf("\nsrednia podanych liczb wynosi: %.2f\n", srednia);

// ii wieksze od sredniej 

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

    wypisz_min_max(tablica, ROZMIAR);

    int suma_niep = suma_nieparzystych(tablica, ROZMIAR);
    printf("suma elementow nieparzystych: %d\n", suma_niep);

    wyswietl_od_konca(tablica, ROZMIAR);

    return 0;
}