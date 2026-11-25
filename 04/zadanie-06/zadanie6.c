#include <stdio.h>

#define ROZMIAR 100000

int dlugosc_napisu(char *napis);
int normalizuj_klucz(int klucz);
char przesun_znak(char znak, int przesuniecie);
void przetworz_tekst(char *napis, int przesuniecie);
void wyczysc_bufor(void);

int main(void)
{
    char tekst[ROZMIAR];
    int klucz = 3;
    int wybor = 0;

    do {
        printf("\n SZYFR CEZARA (aktualny klucz: %d) \n", klucz);
        printf("1. Zaszyfruj tekst\n");
        printf("2. Odszyfruj tekst\n");
        printf("3. Zmien klucz szyfrujacy\n");
        printf("0. Wyjscie\n");
        printf("Wybierz opcje: ");

        if (scanf("%d", &wybor) != 1) {
            wyczysc_bufor();
            printf("Niepoprawny wybor.\n");
            continue;
        }
        wyczysc_bufor();

        if (wybor == 1) {
            printf("Podaj tekst do zaszyfrowania: ");
            if (fgets(tekst, ROZMIAR, stdin) != NULL) {
                przetworz_tekst(tekst, normalizuj_klucz(klucz));
                printf("Zaszyfrowany tekst: %s", tekst);
            }
        } else if (wybor == 2) {
            printf("Podaj tekst do odszyfrowania: ");
            if (fgets(tekst, ROZMIAR, stdin) != NULL) {
                przetworz_tekst(tekst, normalizuj_klucz(-klucz));
                printf("Odszyfrowany tekst: %s", tekst);
            }
        } else if (wybor == 3) {
            printf("Podaj nowy klucz (liczba calkowita): ");
            if (scanf("%d", &klucz) != 1) {
                wyczysc_bufor();
                klucz = 3;
                printf("Niepoprawny klucz. Przywrocono wartosc domyslna: 3.\n");
            } else {
                wyczysc_bufor();
                printf("Ustawiono klucz: %d\n", klucz);
            }
        } else if (wybor == 0) {
            printf("Koniec programu.\n");
        } else {
            printf("Nieznana opcja menu.\n");
        }
    } while (wybor != 0);

    return 0;
}

int dlugosc_napisu(char *napis)
{
    int i = 0;

    while (napis[i] != '\0') {
        i++;
    }

    return i;
}

int normalizuj_klucz(int klucz)
{
    int przesuniecie = klucz % 26;

    if (przesuniecie < 0) {
        przesuniecie += 26;
    }

    return przesuniecie;
}

char przesun_znak(char znak, int przesuniecie)
{
    if (znak >= 65 && znak <= 90) {
        return (char)(65 + ((znak - 65 + przesuniecie) % 26));
    }

    if (znak >= 97 && znak <= 122) {
        return (char)(97 + ((znak - 97 + przesuniecie) % 26));
    }

    return znak;
}

void przetworz_tekst(char *napis, int przesuniecie)
{
    int i = 0;
    int dlugosc = dlugosc_napisu(napis);

    while (i < dlugosc) {
        napis[i] = przesun_znak(napis[i], przesuniecie);
        i++;
    }
}

void wyczysc_bufor(void)
{
    int ch;

    while ((ch = getchar()) != EOF && ch != '\n') {
    }
}