#include <stdio.h>
#define ROZMIAR 5

// i

void wyswietl_for_przod(int tab[], int rozmiar) {
    printf("petla for (od poczatku do konca):    ");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void wyswietl_while_przod(int tab[], int rozmiar) {
    printf("petla while (od poczatku do konca):   ");
    int i = 0;
    while (i < rozmiar) {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
}

void wyswietl_dowhile_przod(int tab[], int rozmiar) {
    printf("petla do while (od poczatku do konca): ");
    int i = 0;
    if (rozmiar > 0) { 
        do {
            printf("%d ", tab[i]);
            i++;
        } while (i < rozmiar);
    }
    printf("\n");
}


// ii

void wyswietl_for_tyl(int tab[], int rozmiar) {
    printf("petla for (od konca do poczatku):      ");
    for (int i = rozmiar - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void wyswietl_while_tyl(int tab[], int rozmiar) {
    printf("petla while (od konca do poczatku):     ");
    int i = rozmiar - 1;
    while (i >= 0) {
        printf("%d ", tab[i]);
        i--;
    }
    printf("\n");
}

void wyswietl_dowhile_tyl(int tab[], int rozmiar) {
    printf("petla do while (od konca do poczatku):   ");
    int i = rozmiar - 1;
    if (rozmiar > 0) { 
        do {
            printf("%d ", tab[i]);
            i--;
        } while (i >= 0);
    }
    printf("\n");
}


int main() {

    int tablica[ROZMIAR] = { 8, 13, 23, 17, 67 };

    printf("zawartosc tablicy poczatkowej: { 8, 13, 23, 17, 67 }\n");

    printf(" i. od poczatku do konca tablicy\n");
    wyswietl_for_przod(tablica, ROZMIAR);
    wyswietl_while_przod(tablica, ROZMIAR);
    wyswietl_dowhile_przod(tablica, ROZMIAR);

    printf(" ii. od konca do poczatku tablicy\n");
    wyswietl_for_tyl(tablica, ROZMIAR);
    wyswietl_while_tyl(tablica, ROZMIAR);
    wyswietl_dowhile_tyl(tablica, ROZMIAR);

    return 0;
}