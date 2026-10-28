#include <stdio.h>

int main() {
    float precos[10] = {199.99, 45.50, 89.90, 15.00, 120.00, 9.99, 250.00, 55.00, 39.90, 150.75};
    int tamanho = 10;
    float aux;

    printf("--- Sistema da Loja Virtual: Organizador de Precos ---\n\n");

    printf("Precos ANTES da ordenacao (Desorganizados):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("R$ %.2f \n", precos[i]);
    }
    printf("\n");

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (precos[j] > precos[j + 1]) {
                aux = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = aux;
            }
        }
    }

    printf("Precos APOS a ordenacao (Criterio: Ordem Crescente):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("R$ %.2f \n", precos[i]);
    }

    return 0;
}