#include <stdio.h>

int suma_cyfr(int n) {
    if (n == 0) {
        return 0;
    } 
    if (n < 0) {
        n = -n;
    }
    return (n % 10) + suma_cyfr(n / 10);
}

int main() {
    int liczba;

    printf("Podaj nieujemna liczbe calkowita: ");
    if (scanf("%d", &liczba) != 1 || liczba < 0) {
        printf("podano niepoprawna liczbe(musi byc dodatnia).\n");
        return 1;
    }

    int wynik = suma_cyfr(liczba);
    printf("Suma cyfr liczby %d wynosi: %d\n", liczba, wynik);

    return 0;
}