#include <stdio.h>

int main() {
    long a, b;
    char znak;

    printf("Podaj dwie liczby oraz rodzaj dzialania (+,-,*,/,%%): ");
    if (scanf("%ld %ld %c", &a, &b, &znak) != 3) {
        printf("Blad wczytywania danych!\n");
        return 1;
    }

    switch (znak) {
        case '+':
            printf("Wynik: %ld + %ld = %ld\n", a, b, a + b);
            break;
            
        case '-':
            printf("Wynik: %ld - %ld = %ld\n", a, b, a - b);
            break;
            
        case '*':
            printf("Wynik: %ld * %ld = %ld\n", a, b, a * b);
            break;
            
        case '/':
            if (b == 0) {
                printf("Nie mozna dzielic przez zero!\n");
            } else {
                printf("Wynik: %ld / %ld = %ld\n", a, b, a / b);
            }
            break;
            
        case '%':
            if (b == 0) {
                printf("Nie mozna dzielic przez zero!\n");
            } else {
                printf("Wynik: %ld %% %ld = %ld\n", a, b, a % b);
            }
            break;

        default:
            printf("Nieznany znak dzialania!\n");
            break;
    }

    return 0;
}