2 - Faca um programa que receba a temperatura media de cada mes do ano, armazenando em um vetor. Verifique e mostre a maior e menor temperatura do ano e em que 
mes ocorraram (Mostrar o mes Janeiro, feveriro... desconsidere impates). -> um for, um swich case um while

#include <stdio.h>

int main() {
    float temp[12];
    int i = 0;
    int mesMaior = 0, mesMenor = 0;
    float maior, menor;

    while (i < 12) {
        printf("Digite a temperatura média do mês %d: ", i + 1);
        scanf("%f", &temp[i]);
        i++;
    }

    maior = menor = temp[0];

    for (i = 1; i < 12; i++) {
        if (temp[i] > maior) {
            maior = temp[i];
            mesMaior = i;
        }
        if (temp[i] < menor) {
            menor = temp[i];
            mesMenor = i;
        }
    }

    printf("\nMaior temperatura: %.1f°C em ", maior);
    switch (mesMaior) {
        case 0: printf("Janeiro"); break;
        case 1: printf("Fevereiro"); break;
        case 2: printf("Março"); break;
        case 3: printf("Abril"); break;
        case 4: printf("Maio"); break;
        case 5: printf("Junho"); break;
        case 6: printf("Julho"); break;
        case 7: printf("Agosto"); break;
        case 8: printf("Setembro"); break;
        case 9: printf("Outubro"); break;
        case 10: printf("Novembro"); break;
        case 11: printf("Dezembro"); break;
    }

    printf("\nMenor temperatura: %.1f°C em ", menor);
    switch (mesMenor) {
        case 0: printf("Janeiro"); break;
        case 1: printf("Fevereiro"); break;
        case 2: printf("Março"); break;
        case 3: printf("Abril"); break;
        case 4: printf("Maio"); break;
        case 5: printf("Junho"); break;
        case 6: printf("Julho"); break;
        case 7: printf("Agosto"); break;
        case 8: printf("Setembro"); break;
        case 9: printf("Outubro"); break;
        case 10: printf("Novembro"); break;
        case 11: printf("Dezembro"); break;
    }

    printf("\n");
    return 0;
}