#include <stdio.h>

int main() {
    float ocena, suma=0;
    int i;
    int il_jedynek=0;
    printf("podaj 5 ocen: \n");
    for (i = 0; i < 5; i++) {
        if (scanf("%f", &ocena) != 1) {
            printf("Blad wczytywania danych!\n");
            return 1;
        }
        suma += ocena;
        if (ocena == 1.0) {
            il_jedynek++;
        }
    }
    printf("Srednia ocen: %.2f\n", suma / 5);
    printf("Liczba jedynek: %d\n", il_jedynek);
    return 0;
}