#include <stdio.h>

int main() {
    int a;

    printf("Podaj liczbe a ja powei  czy jest jednoczesnie dodatnia i parzysta: ");
    if (scanf("%d", &a) != 1) {
        printf("Blad wczytywania danych!\n");
        return 1;
    }   

    if (a > 0 && a % 2 == 0) {
        printf(" jest jednoczesnie dodatnia i parzysta\n", a);
    } else {
        printf("nie jest jednoczesnie dodatnia i parzysta\n", a); 
    }
    return 0;
}