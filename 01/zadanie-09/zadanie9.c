#include <stdio.h>

int main() {
    int a, b;

    printf("podaj dwie liczby a ja powiem czy pierwsza jest podzielna przez druga: ");
    if (scanf("%d %d", &a, &b) !=2) {
        printf("Blad wczytywania danych\n");
        return 1;       
    }
    if (b == 0) {
        printf("Nie mozna dzielic przez 0\n");
        return 1;
    }
    if (a % b ==0){
        printf("liczba %d jest podzielna przez liczbe %d\n", a, b);
    } else {
        printf("liczba %d nie jest podzielna przez liczbe %d\n", a, b);
    }
    return 0;
}