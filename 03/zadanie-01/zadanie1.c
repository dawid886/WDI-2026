#include <stdio.h>

int ciag_fib(int n) {
    if (n <= 1) {
        return n;
    }
    return ciag_fib(n - 1) + ciag_fib(n - 2);
}

int main() {
    int n;
    printf("podaj liczbe ciagu fibonacciego, a ja obllicze ich sume: ");
    scanf("%d", &n);

    if(n<0) {
        printf("podana liczba jest ujemna");
        return 1;
    }   

    long long suma = 0;
    for(int i=0; i<=n; i++) {
        suma += ciag_fib(i);
    }

    printf("suma = %lld\n", suma);
    return 0;
}