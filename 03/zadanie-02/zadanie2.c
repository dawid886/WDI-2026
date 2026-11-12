#include <stdio.h>

long long oblicz(int n) {
    
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
      
    long long f3 = 1; 
    long long f2 = 2; 
    long long f1 = 3; 
    long long aktualny = 0;
    
    for (int i = 4; i <= n; i++) {
        aktualny = (f1 * f2) - f3;
        
        f3 = f2;
        f2 = f1;
        f1 = aktualny;
    }

    return aktualny;
}

int main() {
    int n;
    printf("podaj numer wyrazu n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("podano nieprawidlowa wartosc! (n >= 1).\n");
        return 1;
    }

    long long wynik = oblicz(n);
    printf("f(%d) = %lld\n", n, wynik);

    return 0;
}