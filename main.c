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