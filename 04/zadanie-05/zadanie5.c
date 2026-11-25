#include <stdio.h>

#define ROZMIAR 100000

int policz_znaki(char *tekst);
int czy_calkowita(char *tekst);
int na_liczbe(char *tekst);

int main(void)
{
    char bufor[ROZMIAR];
    int wynik;

    printf("Wpisz ciag znakow: ");
    if (scanf("%99999s", bufor) == 1) {
        if (!czy_calkowita(bufor)) {
            printf("Podany ciag nie jest liczba calkowita.\n");
        } else {
            wynik = na_liczbe(bufor);
            printf("To liczba calkowita: %d\n", wynik);
        }
    }

    return 0;
}

int policz_znaki(char *tekst)
{
    int licznik = 0;

    while (*(tekst + licznik) != '\0') {
        licznik++;
    }

    return licznik;
}

int czy_calkowita(char *tekst)
{
    int pozycja = 0;
    int dlugosc = policz_znaki(tekst);

    if (tekst[0] == '-') {
        pozycja = 1;
    }

    if (pozycja == dlugosc) {
        return 0;
    }

    while (pozycja < dlugosc) {
        if (tekst[pozycja] < '0' || tekst[pozycja] > '9') {
            return 0;
        }
        pozycja++;
    }

    return 1;
}

int na_liczbe(char *tekst)
{
    int idx = 0;
    int znak = 1;
    int koniec = policz_znaki(tekst);
    long suma = 0;

    if (tekst[0] == '-') {
        znak = -1;
        idx++;
    }

    while (idx < koniec) {
        suma = (suma * 10L) + (tekst[idx] - '0');
        idx++;
    }

    return (int)(suma * znak);
}