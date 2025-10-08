#include <stdio.h>

int main() {
    int vetor[8];
    int numero, indice, indiceAuxiliar, posicao, contador = 0;

    while (contador < 8) {
        printf("Digite o %d numero: ", contador + 1);
        scanf("%d", &numero);

        posicao = 0;
        while (posicao < contador && vetor[posicao] < numero) {
            posicao++;
        }

        for (indiceAuxiliar = contador; indiceAuxiliar > posicao; indiceAuxiliar--) {
            vetor[indiceAuxiliar] = vetor[indiceAuxiliar - 1];
        }

        vetor[posicao] = numero;
        contador++;
    }

    printf("\nNumeros em ordem crescente:\n");
    for (indice = 0; indice < 8; indice++) {
        printf("%d ", vetor[indice]);
    }

    printf("\n");
    return 0;
}

.