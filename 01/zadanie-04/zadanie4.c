#include <stdio.h>

int main() {
    int liczba1;
    int liczba2;
    int liczba3;
    int suma;
    int roznica;
    int iloraz;
    int iloczyn;

    printf("podaj 3 liczby calkowite: ");
        if (scanf("%d %d %d", &liczba1, &liczba2, &liczba3) != 3) {
        printf("Blad wczytywania danych!\n");
        return 1;
    }
    suma=liczba1 + liczba2 + liczba3;
    roznica=liczba1 - liczba2;
    iloczyn=liczba1 * liczba3;
    iloraz=liczba3 / liczba2;

    printf("suma: %d\n", suma);
    printf("roznica: %d\n", roznica);
    printf("iloczyn: %d\n", iloczyn);
    printf("iloraz: %d\n", iloraz); 

    return 0;

}