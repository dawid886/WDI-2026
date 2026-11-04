#include <stdio.h>
#include <math.h> 

void dodawanie() {
    int n;
    double suma = 0, liczba;
    printf("ile liczb chcesz doda? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("podaj liczbe %d: ", i + 1);
        scanf("%lf", &liczba);
        suma += liczba;
    }
    printf("wynik dodawania: %.2f\n", suma);
}

void odejmowanie() {
    double wynik, liczba;
    printf("podaj liczbę początkową: ");
    scanf("%lf", &wynik);
    printf("podaj kolejne liczby do odjecia (wpisanie 0 konczy dzialanie): \n");
    while (1) {
        scanf("%lf", &liczba);
        if (liczba == 0) break;
        wynik -= liczba;
    }
    printf("wynik odejmowania: %.2f\n", wynik);
}

void mnozenie() {
    double a, b;
    printf("podaj dwie liczby: ");
    scanf("%lf %lf", &a, &b);
    printf("wynik mnożenia: %.2f\n", a * b);
}

void dzielenie() {
    double a, b;
    printf("podaj dzielna i dzielnik: ");
    scanf("%lf %lf", &a, &b);
    if (b == 0) {
        printf("nie można dzielic prez zero!\n");
    } else {
        printf("wynik dzielenia: %.2f\n", a / b);
    }
}

void potegowanie() {
    double podstawa, wykladnik;
    printf("Podaj podstawę i wykładnik: ");
    scanf("%lf %lf", &podstawa, &wykladnik);
    printf("wynik potegowania: %.2f\n", pow(podstawa, wykladnik));
}

void kwadrat() {
    double x;
    printf("podaj liczbe: ");
    scanf("%lf", &x);
    printf("kwadrat liczby: %.2f\n", x * x);
}

void silnia() {
    int n;
    unsigned long long wynik = 1;
    printf("podaj liczbe całkowita nieujemna: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Nie ma silni dla liczb ujemnych.\n");
        return;
    }
    for (int i = 2; i <= n; i++) {
        wynik *= i;
    }
    printf("wynik silni: %llu\n", wynik);
}

int main() {
    int wybor;
    do {
        printf("\n--- KALKULATOR ---\n");
        printf("1. Dodawanie n liczb\n");
        printf("2. Odejmowanie do '0'\n");
        printf("3. Mnozenie dwoch liczb\n");
        printf("4. Dzielenie\n");
        printf("5. Potegowanie\n");
        printf("6. Kwadrat liczby\n");
        printf("7. Silnia\n");
        printf("0. Wyjscie\n");
        printf("wybierz opcje: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1: dodawanie(); break;
            case 2: odejmowanie(); break;
            case 3: mnozenie(); break;
            case 4: dzielenie(); break;
            case 5: potegowanie(); break;
            case 6: kwadrat(); break;
            case 7: silnia(); break;
            case 0: printf("koniec programu.\n"); break;
            default: printf("nie ma takiej opcji.\n");
        }
    } while (wybor != 0);

    return 0;
}