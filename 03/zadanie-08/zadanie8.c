#include <stdio.h>

#define ROZMIAR 5

int kolejka[ROZMIAR];
int ile_w_kolejce = 0; 

void pushFIFO(int wartosc) {
    if (ile_w_kolejce == ROZMIAR) {
        printf("[FIFO] Kolejka jest pelna!\n");
        return;
    }
    kolejka[ile_w_kolejce] = wartosc;
    ile_w_kolejce++;
    printf("[FIFO] Dodano: %d\n", wartosc);
}

void popFIFO() {
    if (ile_w_kolejce == 0) {
        printf("[FIFO] Kolejka jest pusta!\n");
        return;
    }
    int usuniety = kolejka[0];
    
    for (int i = 0; i < ile_w_kolejce - 1; i++) {
        kolejka[i] = kolejka[i + 1];
    }
    ile_w_kolejce--;
    printf("[FIFO] Usunieto: %d\n", usuniety);
}

void wyswietlFIFO() {
    printf("[FIFO] Aktualna kolejka: ");
    for (int i = 0; i < ile_w_kolejce; i++) {
        printf("%d ", kolejka[i]);
    }
    printf("\n");
}


int stos[ROZMIAR];
int wierzcholek = -1; 

void pushLIFO(int wartosc) {
    if (wierzcholek == ROZMIAR - 1) {
        printf("[LIFO] Stos jest pelny!\n");
        return;
    }
    wierzcholek++;
    stos[wierzcholek] = wartosc;
    printf("[LIFO] Dodano: %d\n", wartosc);
}

void popLIFO() {
    if (wierzcholek == -1) {
        printf("[LIFO] Stos jest pusty!\n");
        return;
    }
    int usuniety = stos[wierzcholek];
    wierzcholek--; 
    printf("[LIFO] Usunieto: %d\n", usuniety);
}

void wyswietlLIFO() {
    printf("[LIFO] Aktualny stos: ");
    for (int i = 0; i <= wierzcholek; i++) {
        printf("%d ", stos[i]);
    }
    printf("\n");
}

int main() {
    printf("FIFO\n");
    pushFIFO(15);
    pushFIFO(34);
    pushFIFO(78);
    wyswietlFIFO();

    popFIFO(); 
    wyswietlFIFO();


    printf("\nLIFO\n");
    pushLIFO(4);
    pushLIFO(35);
    pushLIFO(99);
    wyswietlLIFO();

    popLIFO(); 
    wyswietlLIFO();

    return 0;
}
