#include <stdio.h>

int main() {
    int soma = 0;
    int numero = 2;
    int contador = 0;

    while (contador < 50) {
        soma += numero;
        numero += 2;
        contador++;
    }

    printf("%d\n", soma);

    return 0;
}
