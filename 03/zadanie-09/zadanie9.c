#include <stdio.h>

#define ROZMIAR 10

void bubble_sort(int tab[], int rozmiar) {
    int zamiana;
    for (int i = 0; i < rozmiar - 1; i++) {
        zamiana = 0; 
        
        for (int j = 0; j < rozmiar - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                // Zamiana miejscami (swap)
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
                
                zamiana = 1; 
            }
        }
        
        if (zamiana == 0) {
            break;
        }
    }
}

int main() {
    int tablica[ROZMIAR];

    printf("Podaj %d liczb calkowitych:\n", ROZMIAR);
    for (int i = 0; i < ROZMIAR; i++) {
        printf("Liczba %d: ", i + 1);
        if (scanf("%d", &tablica[i]) != 1) {
            printf("niepoprawna wartosc.\n");
            return 1;
        }
    }

    printf("\nTablica przed sortowaniem: ");
    for (int i = 0; i < ROZMIAR; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    bubble_sort(tablica, ROZMIAR);

    printf("Tablica po sortowaniu:     ");
    for (int i = 0; i < ROZMIAR; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}