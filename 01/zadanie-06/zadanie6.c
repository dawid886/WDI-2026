#include <stdio.h>

int main() {
    int cale_sekundy, godziny, minuty, sekundy;
    printf("Podaj mi liczbe sekund: ");

     if (scanf("%d", &cale_sekundy) != 1 || cale_sekundy < 0) {
        printf("Podano niedodatnia wartosc!\n");
        return 1;
    }
    godziny = cale_sekundy / 3600;
    minuty = (cale_sekundy % 3600) / 60;
    sekundy = cale_sekundy % 60;
    printf("Czas: %d godzin, %d minut, %d sekund\n", godziny, minuty, sekundy);
    return 0;
}
