1 - Faca um programa que, no momento de preecher um vetor com 8 numeros inteiros ja os armazenem de forma crescente (usar vetor e while e for).

#include <stdio.h>

int main() {
    int vetor[8];
    int numero, indice, indiceAuxiliar, posicao, contador = 0;

    while (contador < 8) {
        printf("Digite o %dº número: ", contador + 1);
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

    printf("\nNúmeros em ordem crescente:\n");
    for (indice = 0; indice < 8; indice++) {
        printf("%d ", vetor[indice]);
    }

    printf("\n");
    return 0;
}