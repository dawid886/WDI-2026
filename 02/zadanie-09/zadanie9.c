#include <stdio.h>

unsigned long long silnia(int a) {
    if (a < 0) {
        return 0;
    }

    unsigned long long wynik = 1ULL; 
    
    for (int i = 1; i <= a; ++i) {
        wynik *= i;
    }
    
    return wynik;
}

int main() {
    int liczba;

    
    printf("podaj liczbe, a ja oblicze jej silnie: ");
    scanf("%d", &liczba);

    if (liczba < 0) {
        printf("podales ujemna liczbe( nie ma silni dla liczb ujemnych )!\n");
    } else {
        
        printf("silnia z %d wynosi: %llu\n", liczba, silnia(liczba));
    }

    return 0;
}