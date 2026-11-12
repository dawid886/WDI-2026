#include <stdio.h>

#define ROZMIAR 10

void merge(int tab[], int lewy, int srodek, int prawy) {
    int n1 = srodek - lewy + 1;
    int n2 = prawy - srodek;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = tab[lewy + i];
    for (int j = 0; j < n2; j++) R[j] = tab[srodek + 1 + j];

    int i = 0, j = 0, k = lewy;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            tab[k++] = L[i++];
        } else {
            tab[k++] = R[j++];
        }
    }

    while (i < n1) tab[k++] = L[i++];
    while (j < n2) tab[k++] = R[j++];
}

void merge_sort(int tab[], int lewy, int prawy) {
    if (lewy < prawy) {
        int srodek = lewy + (prawy - lewy) / 2;

        merge_sort(tab, lewy, srodek);
        merge_sort(tab, srodek + 1, prawy);
        merge(tab, lewy, srodek, prawy);
    }
}

int main() {
    int tablica[ROZMIAR];

    printf("podaj %d liczb calkowitych:\n", ROZMIAR);
    for (int i = 0; i < ROZMIAR; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tablica[i]);
    }

    merge_sort(tablica, 0, ROZMIAR - 1);

    printf("\ntablica po posortowaniu:\n");
    for (int i = 0; i < ROZMIAR; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}