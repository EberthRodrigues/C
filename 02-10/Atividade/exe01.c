1 - Faca um programa que, no momento de preecher um vetor com 8 numeros inteiros ja os armazenem de forma crescente (usar vetor e while e for).

#include <stdio.h>

int main() {
    int v[8], n, i, j, pos, count = 0;

    while (count < 8) {
        printf("Digite o %dº número: ", count + 1);
        scanf("%d", &n);

        pos = 0;
        while (pos < count && v[pos] < n) pos++;

        for (j = count; j > pos; j--) v[j] = v[j-1];

        v[pos] = n;
        count++;
    }

    printf("\nVetor em ordem crescente: ");
    for (i = 0; i < 8; i++) printf("%d ", v[i]);

    return 0;
}