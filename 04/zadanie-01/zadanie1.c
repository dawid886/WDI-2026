#include <stdio.h>

void quick_sort(int tablica[], int lewy, int prawy) {
    
    if (lewy >= prawy) return;

    
    int piwot = tablica[(lewy + prawy) / 2];
    int i = lewy;
    int j = prawy;

    
    while (i <= j) {
        
        while (tablica[i] < piwot) i++;
        
        
        while (tablica[j] > piwot) j--;

        
        if (i <= j) {
            int temp = tablica[i];
            tablica[i] = tablica[j];
            tablica[j] = temp;
            i++;
            j--;
        }
    }

    
    if (lewy < j) quick_sort(tablica, lewy, j);
    if (i < prawy) quick_sort(tablica, i, prawy);
}

int main() {
    int liczby[] = {8, 3, 1, 7, 0, 10, 2};
    int rozmiar = 7;

    quick_sort(liczby, 0, rozmiar - 1);

    
    for (int k = 0; k < rozmiar; k++) {
        printf("%d ", liczby[k]);
    }
    return 0;
}