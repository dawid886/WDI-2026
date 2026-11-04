#include <stdio.h>

int main() {
    char znak;
    
    printf("Wybierz klase spoleczna:\n");
    printf("  P - Poddany\n");
    printf("  G - Giermek\n");
    printf("  R - Rycerz\n");
    printf("  M - Mag\n");
    printf("  K - Krolowa\n");
    printf("Wybierz klase spoleczna(nizej napisze co mozesz robic): ");

    if (scanf(" %c", &znak) != 1) {
        printf("Blad! Prawdopodobnie podales zle dane\n");
        return 1;
    }
    
    switch (znak) {
        case 'K':
        case 'k':
            printf("rozkazywac Krolowi, ");
        case 'M':
        case 'm':
            printf("rozmawiac z Krolem, ");
        case 'R':
        case 'r':
            printf("wchodzic do zamku codziennie oraz rekrutowac giermkow, ");
        case 'G':
        case 'g':
            printf("wchodzic na dziedziniec zamkowy codziennie, ");
        case 'P':
        case 'p':
            printf("czcic Krola.\n");
            break;
        default:
            printf("Nie ma takiej klasy! Wybierz litere P, G, R, M lub K.\n");
            break;
    }

    return 0;
}