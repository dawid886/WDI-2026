#include <stdio.h>

int _ceiling(double x) {
    int wynik = (int)x;

    if (x > 0 && x != (double)wynik) {
        wynik = wynik + 1;
    }
    return wynik;

}

int _floor(double x) {
    int wynik = (int)x;

    if (x < 0 && x != (double)wynik) {
        wynik = wynik -1;
    }
    return wynik;
}

int _round(double x) {
    int wynik = (int)x;

    if (x >= 0 && x != (double)wynik) {
        return (int)(x + 0.5);
    } else{
        return (int)(x - 0.5);
        }
    
}

int main() {
    double liczba;

    printf("podaj liczbe zmiennoprzecinkowa: ");

    if (scanf("%lf", &liczba) != 1) {
        printf("niepoprawny format liczby. \n");
        return 1;
    }

    printf("Floor (zaokrogla w dol): %d\n", _floor(liczba));
    printf("Ceil (zaokrogla w gore): %d\n", _ceiling(liczba));
    printf("Round (zaokragla matematycznie): %d\n", _round(liczba));

    return 0;
}