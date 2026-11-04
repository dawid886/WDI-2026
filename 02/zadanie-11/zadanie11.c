#include <stdio.h>

double potega(double liczba, int wykladnik) {
if (wykladnik == 0) {
        return 1.0;
    }

    if (wykladnik < 0) {
        return 1.0 / potega(liczba, -wykladnik);
    }

    return liczba * potega(liczba, wykladnik - 1);

}

int main() {
    double podstawa;
    int wykladnik;

    printf("podaj podstawe  potegi: ");
    if (scanf("%lf", &podstawa) !=1) return 1;

    printf("podaj wykladnik potegi: ");
    if (scanf("%d", &wykladnik) != 1) return 1;

    printf("wynik: %6f\n", potega(podstawa, wykladnik));

    return 0;

}