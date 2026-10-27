#include <stdio.h>

int main() {
    float ocena, suma=0;
    int i;
    printf("podaj 5 ocen: \n");
    for (i = 0; i < 5; i++) {
        if (scanf("%f", &ocena) != 1) {
            printf("Blad wczytywania danych!\n");
            return 1;
        }
        suma += ocena;
    }
    printf("Srednia ocen: %.2f\n", suma / 5);
    return 0;
}