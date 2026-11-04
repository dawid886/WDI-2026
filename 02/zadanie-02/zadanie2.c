#include <stdio.h>

int main() {

    int n;
    int suma = 0;
    printf("podaj liczbe od 1 do 100\n");
    scanf("%d", &n);

    if (n<1 || n>100) {
        printf("podana liczba jest spoza zakresu\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    printf("suma kwadratow od 1 do %d wynosi: %d\n", n, suma);

    return 0;
}