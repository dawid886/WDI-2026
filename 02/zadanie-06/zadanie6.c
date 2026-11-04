#include <stdio.h>

int main() {
    int miesiac;

    printf("podaj numer miesiaca od 1 do 12: ");
    if (scanf("%d", &miesiac) != 1) {
        printf("Blad! Nie ma takiego miesiaca\n");
        return 1;
    }

    switch (miesiac) {
        case 1:
        case 2:
        case 3:
            printf("ten miesiac jest w pierwszym kwartale\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("ten miesiac jest w drugim kwartale\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("ten miesiac jest w trzecim kwartale\n");
            break;
        case 10:
        case 11:
        case 12:
            printf("ten miesiac jest w czwartym kwartale\n");
            break;

            default:
            printf("Blad! Nie ma takiego miesiaca!\n");
            break;

    }
    return 0;
}