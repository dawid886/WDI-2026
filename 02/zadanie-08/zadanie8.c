#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;

    printf("podaj pierwsza liczbe: ");
    scanf("%d", &x);

    printf("podaj druga liczbe: ");
    scanf("%d", &y);

    printf("wieksza liczba (max): %d\n", max(x, y));
    printf("mniejsza liczba (min): %d\n", min(x, y));

    return 0;
}