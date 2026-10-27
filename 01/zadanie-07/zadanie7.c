#include <stdio.h>

int main() {
    int a, b;

    printf("podaj dwie liczby calkowite: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Błąd wczytywania danych!\n");
        return 1;
    }

    printf("wieksza liczba: ");
    if (a > b) {
        printf("%d\n", a);
    } else if (b > a) {
        printf("%d\n", b);
    } else {
        printf("liczby są równe (%d)\n", a);
    }

    printf("mniejsza liczba: ");
    if (a < b) {
        printf("%d\n", a);
    } else if (b < a) {
        printf("%d\n", b);
    } else {
        printf("liczby są równe (%d)\n", a);
    }

    printf("relacja: ");
    if (a > b) {
        printf("%d > %d\n", a, b);
    } else if (a < b) {
        printf("%d < %d\n", a, b);
    } else {
        printf("%d = %d\n", a, b);
    }

    return 0;
}