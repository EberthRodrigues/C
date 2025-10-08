#include <stdio.h>

int main() {
    int linha, coluna;
    int matrizM[2][2];
    int matrizR[2][2];
    int maiorElemento = 0;

    // Leitura da matriz M
    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            printf("Digite o elemento da linha %d e coluna %d: ", linha + 1, coluna + 1);
            scanf("%d", &matrizM[linha][coluna]);
            if (matrizM[linha][coluna] > maiorElemento)
                maiorElemento = matrizM[linha][coluna];
        }
    }

    // Geração da matriz R
    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            matrizR[linha][coluna] = matrizM[linha][coluna] * maiorElemento;
        }
    }

    // Exibição da matriz resultante
    printf("\nMatriz resultante:\n");
    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            printf("%d ", matrizR[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}