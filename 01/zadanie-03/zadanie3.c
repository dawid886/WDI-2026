#include <stdio.h>

int main() {
    char znak[100];
    int wiek;

    printf("podaj swoje imie oraz wiek: ");
    if (scanf("%99s %d", znak, &wiek) !=2) {
        printf("Blad wczytywania danych!\n");
        return 1;   
    }   
    printf("Inicjal: %c, wiek: %d\n", znak[0], wiek);

    return 0;


}