#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número maior que 0: ");
        scanf("%d", &numero); // Solicita a entrada do usuário

        if (numero <= 0) { // Verifica se o número é inválido
            printf("Número inválido! Tente novamente.\n");
        } else {
            printf("Número válido: %d\n", numero);
            break; // Sai do loop se o número for válido
        }
    } while (1); // Condição verdadeira para manter o loop até o break

    return 0;
}