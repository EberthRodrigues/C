#include <stdio.h>

int main() {
    char nomesLojas[8][20];
    char nomesProdutos[4][20];
    float precos[8][4];
    int loja, produto;

printf("Eberth da Silva Rodrigues\n");

    for (loja = 0; loja < 8; loja++) {
        printf("Digite o nome da loja %d: ", loja + 1);
        scanf("%s", nomesLojas[loja]);
    }

    for (produto = 0; produto < 4; produto++) {
        printf("Digite o nome do produto %d: ", produto + 1);
        scanf("%s", nomesProdutos[produto]);
    }

    for (loja = 0; loja < 8; loja++) {
        for (produto = 0; produto < 4; produto++) {
            printf("Digite o preco do produto %s na loja %s: ", nomesProdutos[produto], nomesLojas[loja]);
            scanf("%f", &precos[loja][produto]);
        }
    }

    printf("\nProdutos com preco ate R$60,00:\n");
    for (loja = 0; loja < 8; loja++) {
        for (produto = 0; produto < 4; produto++) {
            if (precos[loja][produto] <= 60)
                printf("%s - %s: R$%.2f\n", nomesProdutos[produto], nomesLojas[loja], precos[loja][produto]);
        }
    }

    return 0;
}