#include <stdio.h>

int main() {
    double a, b;
    char znak;

    printf("Podaj dwie liczby oraz rodzaj dzialania (+,-,*,/): ");
    if (scanf("%lf %c %lf", &a, &znak, &b) != 3) {
        printf("Blad wczytywania danych!\n");
        return 1;
    }

    switch (znak) {
        case '+':
            printf("Wynik: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
            
        case '-':
            printf("Wynik: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
            
        case '*':
            printf("Wynik: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
            
        case '/':
            if (b == 0) {
                printf("Nie mozna dzielic przez zero!\n");
            } else {
                printf("Wynik: %.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
            
        default:
            printf("Nieznany znak dzialania!\n");
            break;
    }

    return 0;
}