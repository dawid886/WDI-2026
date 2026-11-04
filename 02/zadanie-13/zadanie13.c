#include <stdio.h>

int ciag_fib(int n) {
    if (n <= 1) {
        return n;
    }
    return ciag_fib(n - 1) + ciag_fib(n - 2);
}

int main() {
    int n;
    printf("podaj liczbe ciagu fibonacciego: ");
    scanf("%d", &n);
    printf("F(%d) = %d\n", n, ciag_fib(n));
    return 0;
}