#include <stdio.h>

int main() {
    const unsigned granica = 20U;
    unsigned suma = 0U;

    for (unsigned i = 1U; i <= granica; i++) {

        if (i%3 == 0) {
            suma += i;
        }
    }
    
    printf("Suma liczb podzielnych przez 3 od 1 do %u wynosi: %u\n", granica, suma);

    return 0;
}


