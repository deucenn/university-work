#include <stdio.h>

void sieb(int n) {
    if (n < 2) {
        printf("Es gibt keine Primzahlen für n < 2.\n");
        return;
    }

    char isPrime[n + 1];

    for (int i = 2; i <= n; i++) {
        isPrime[i] = 1;
    }

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = 0;
            }
        }
    }

    printf("Die Primzahlen von 2 bis %d sind:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
}

int main(void) {
    int n;

    printf("Geben Sie n ein (maximal 10000): ");
    scanf("%d", &n);

    if (n < 2 || n > 10000) {
        printf("Bitte geben Sie eine Zahl zwischen 2 und 10000 ein.\n");
        return 1;  
    }

    sieb(n);

    return 0;
}
