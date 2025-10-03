#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    float preco, custo, imposto, preco_final;
    char refrigeracao, categoria;
    int i;

    for (i = 1; i <= 12; i++) {
        printf("\n-----------------------");
        printf("\nProduto %d", i);
        printf("\n-----------------------");

        printf("\nDigite o preço unitário: ");
        scanf("%f", &preco);

        printf("Precisa de refrigeração? (S/N): ");
        scanf(" %c", &refrigeracao);

        printf("\nCategoria (A - Alimentação | L - Limpeza | V - Vestuário): ");
        scanf(" %c", &categoria);

        // Custo
        if (preco < 20) {
            if (categoria=='A' || categoria=='a') custo = 2;
            else if (categoria=='L' || categoria=='l') custo = 3;
            else custo = 4;
        } else if (preco <= 50) {
            if (refrigeracao=='S' || refrigeracao=='s') custo = 6;
            else custo = 0;
        } else {
            if (refrigeracao=='S' || refrigeracao=='s') {
                if (categoria=='A' || categoria=='a') custo = 5;
                else if (categoria=='L' || categoria=='l') custo = 2;
                else custo = 4;
            } else {
                if (categoria=='L' || categoria=='l') custo = 1;
                else custo = 0;
            }
        }

        // Imposto
        if (preco < 25) imposto = preco * 0.05;
        else imposto = preco * 0.08;

        preco_final = preco + custo + imposto;

        printf("\nCusto de Estocagem: R$ %.2f", custo);
        printf("\nImposto: R$ %.2f", imposto);
        printf("\nPreço Final: R$ %.2f", preco_final);

        if (preco_final <= 20) printf("\nClassificação: Barato\n");
        else if (preco_final <= 100) printf("\nClassificação: Normal\n");
        else printf("\nClassificação: Caro\n");
    }
    return 0;
}