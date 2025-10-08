#include <stdio.h>

int main() {
    int codigos[10];
    float saldos[10];
    int indice, codigoDigitado, opcao;
    float valor;
    int encontrou;

    for (indice = 0; indice < 10; indice++) {
        printf("Digite o codigo da conta %d: ", indice + 1);
        scanf("%d", &codigos[indice]);
        printf("Digite o saldo inicial da conta %d: ", indice + 1);
        scanf("%f", &saldos[indice]);
    }

    do {
        printf("\n1 - Efetuar deposito\n");
        printf("2 - Efetuar saque\n");
        printf("3 - Consultar ativo bancario\n");
        printf("4 - Finalizar programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o código da conta para depósito: ");
                scanf("%d", &codigoDigitado);
                encontrou = 0;
                for (indice = 0; indice < 10; indice++) {
                    if (codigos[indice] == codigoDigitado) {
                        printf("Digite o valor a depositar: ");
                        scanf("%f", &valor);
                        saldos[indice] += valor;
                        encontrou = 1;
                        break;
                    }
                }
                if (!encontrou)
                    printf("Conta nao encontrada\n");
                break;

            case 2:
                printf("Digite o codigo da conta para saque: ");
                scanf("%d", &codigoDigitado);
                encontrou = 0;
                for (indice = 0; indice < 10; indice++) {
                    if (codigos[indice] == codigoDigitado) {
                        printf("Digite o valor a sacar: ");
                        scanf("%f", &valor);
                        if (valor <= saldos[indice]) {
                            saldos[indice] -= valor;
                        } else {
                            printf("Saldo insuficiente\n");
                        }
                        encontrou = 1;
                        break;
                    }
                }
                if (!encontrou)
                    printf("Conta não encontrada\n");
                break;

            case 3:
                valor = 0;
                for (indice = 0; indice < 10; indice++) {
                    valor += saldos[indice];
                }
                printf("Ativo bancario total: %.2f\n", valor);
                break;

            case 4:
                printf("Finalizando o programa...\n");
                break;

            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 4);

    return 0;
}








#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
int x = 0;

do {
	printf("Valor de x = %d \n ", x);
	x=x+1;
} 
	while(x!=5);
	printf("Valor de x depois de sair da estrutura: %d", x);
	
}