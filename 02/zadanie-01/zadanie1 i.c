#include <stdio.h>

int main(void) {
    int n;
    int suma = 0, dzielnik = 0;
    int najw = 0, najmn = 0;

    printf("podawaj liczby jesli podasz parzysta skoncze ich pobieranie.\n");

    do {
        scanf("%d", &n);
        if (dzielnik == 0) {
            najw = n;
            najmn = n;

        } else {
            if (n>najw) najw = n;
            if (n<najmn) najmn = n;


        }

        suma += n;
        dzielnik++;

    } while (n % 2 != 0);

    printf("najwieksza liczba: %d\n", najw);
    printf("najmniejsza liczba: %d\n", najmn);
    printf("suma: %d\n", suma);
    printf("srednia: %.2f\n", (float)suma / dzielnik);


        return 0;
    }




