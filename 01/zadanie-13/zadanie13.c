#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0, number, average;

    printf("podaj liczbe elementow (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Blad: Podano niepoprawna wartosc.\n");
        return 1;
    }


    for (i = 1; i <= n; i++) {
        printf("podaj liczbe %d: ", i);
        scanf("%lf", &number);
        sum += number;
    }

    average = sum / n;

    printf("suma = : %.2f\n", sum);
    printf("srednia = : %.2f\n", average);

    return 0;
}