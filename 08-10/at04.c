#include <stdio.h>

int main() {
    int matrizEstoque[5][3];
    int linha, coluna;

    // Leitura da matriz (4 armazéns + 1 linha de custo)
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            if (linha < 4)
                printf("Digite o estoque do produto %d no armazem %d: ", coluna + 1, linha + 1);
            else
                printf("Digite o custo do produto %d: ", coluna + 1);
            scanf("%d", &matrizEstoque[linha][coluna]);
        }
    }

    // a) Quantidade de itens por armazém
    printf("\nQuantidade de itens por armazem:\n");
    for (linha = 0; linha < 4; linha++) {
        int soma = 0;
        for (coluna = 0; coluna < 3; coluna++) {
            soma += matrizEstoque[linha][coluna];
        }
        printf("Armazem %d: %d itens\n", linha + 1, soma);
    }

    // b) Armazém com maior estoque do produto 2
    int maiorEstoque = matrizEstoque[0][1], armazemMaior = 1;
    for (linha = 1; linha < 4; linha++) {
        if (matrizEstoque[linha][1] > maiorEstoque) {
            maiorEstoque = matrizEstoque[linha][1];
            armazemMaior = linha + 1;
        }
    }
    printf("\nArmazem com maior estoque do produto 2: %d\n", armazemMaior);

    // c) Armazém com menor estoque total
    int menorTotal = 9999, armazemMenor = 1;
    for (linha = 0; linha < 4; linha++) {
        int soma = 0;
        for (coluna = 0; coluna < 3; coluna++)
            soma += matrizEstoque[linha][coluna];
        if (soma < menorTotal) {
            menorTotal = soma;
            armazemMenor = linha + 1;
        }
    }
    printf("Armazem com menor estoque: %d\n", armazemMenor);

    // d) Custo total de cada produto
    printf("\nCusto total de cada produto:\n");
    for (coluna = 0; coluna < 3; coluna++) {
        int soma = 0;
        for (linha = 0; linha < 4; linha++)
            soma += matrizEstoque[linha][coluna];
        float custo = soma * matrizEstoque[4][coluna];
        printf("Produto %d: R$%.2f\n", coluna + 1, custo);
    }

    // e) Custo total de cada armazém
    printf("\nCusto total de cada armazem:\n");
    for (linha = 0; linha < 4; linha++) {
        float total = 0;
        for (coluna = 0; coluna < 3; coluna++)
            total += matrizEstoque[linha][coluna] * matrizEstoque[4][coluna];
        printf("Armazem %d: R$%.2f\n", linha + 1, total);
    }

    return 0;
}