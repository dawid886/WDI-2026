#include <stdio.h>

double potega(double liczba, int wykladnik) {
    double wynik = 1.0;
    int czy_ujemny = 0;

    if (wykladnik == 0) {
        return 1.0;
    }

    if (wykladnik < 0) {
        czy_ujemny = 1;
        wykladnik = -wykladnik;
    }

    for (int i = 0; i < wykladnik; ++i) {
        wynik *= liczba;
    }

    if (czy_ujemny) {
        return 1.0 / wynik;
    }

    return wynik;
}

int main() {
    double podstawa;
    int wykladnik;

    printf("podaj podstawe potegi: ");
    scanf("%lf", &podstawa);

    printf("Podaj wykladnik potegi (calkowity): ");
    scanf("%d", &wykladnik);

    printf("wynik: %.8f\n", potega(podstawa, wykladnik));

    return 0;
}