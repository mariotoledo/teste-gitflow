#include <stdio.h>

int main() {
    printf("Hellow World\n");
    int soma = somar(5, 2);
    printf("resultado da soma: %d\n", soma);
    return 0;
}

int somar(int a, int b) {
    return a + b;
}