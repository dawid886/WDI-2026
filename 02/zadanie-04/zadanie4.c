#include <stdio.h>

int main() {
    int a = 0, b = 0, wybor;
    char operator = '+';
    int dziala = 1;

    printf("Podaj pierwsza liczbe: ");
    if (scanf("%d", &a) != 1) return 1;
    
    printf("Podaj druga liczbe: ");
    if (scanf("%d", &b) != 1) return 1;

    while (dziala) {

        printf("AKTUALNIE: %d %c %d = ", a, operator, b);

        if (operator == '+') printf("%d\n", a + b);
        else if (operator == '-') printf("%d\n", a - b);
        else if (operator == '*') printf("%d\n", a * b);
        else if (operator == '/') {
            if (b == 0) printf("Blad, nie mozna dzielic przez zero\n");
            else printf("%d\n", a / b);
        }
        else if (operator == '%') {
            if (b == 0) printf("Blad, nie mozna dzielic przez zero\n");
            else printf("%d\n", a % b);
        }

        printf("1. Zmien pierwsza liczbe (%d)\n", a);
        printf("2. Zmien druga liczbe (%d)\n", b);
        printf("3. Zmien dzialanie (%c)\n", operator);
        printf("4. Wyjdz\n");
        printf("Wybierz opcje: ");
        
        if (scanf("%d", &wybor) != 1) {
            printf("Blad odczytu!\n");
            break;
        }

        if (wybor == 1) {
            printf("Nowa pierwsza liczba: ");
            scanf("%d", &a);
        } 
        else if (wybor == 2) {
            printf("Nowa druga liczba: ");
            scanf("%d", &b);
        } 
        else if (wybor == 3) {
            printf("Nowe dzialanie (+, -, *, /, %%): ");
            scanf(" %c", &operator);
        } 
        else if (wybor == 4) {
            dziala = 0;
        }
    }

    printf("Koniec programu. Nacisnij Enter, aby zamknac.");

    while (getchar() != '\n');
    getchar();

    return 0;
}