#include <stdio.h>

int main() {
    int n;
    long long suma = 0; 
    printf("Podaj liczbę n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Blad: Podaj poprawną nieujemną liczbę całkowitą!\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        suma += i; 
    }
        printf("Suma wszystkich liczb naturalnych mniejszych od %d wynosi: %lld\n", n, suma);

        return 1;
    
    return 0;
}

