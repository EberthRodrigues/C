#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ano_contratacao = 2018;
    int ano_atual;
    float salario_inicial = 1000.0;
    float percentual_aumento_2019 = 1.5;
    float percentual_aumento_atual = percentual_aumento_2019;
    float salario_atual = salario_inicial;

	printf("Eberth da Silva Rodrigues");
    printf("\nDigite o ano atual: ");
    scanf("%d", &ano_atual);
    if (ano_atual < ano_contratacao)
    {
        printf("Ano invalido. O ano atual deve ser maior ou igual a %d.\n", ano_contratacao);
        return 1;
    }

    for (int ano = ano_contratacao + 1; ano <= ano_atual; ano++)
    {
        salario_atual += salario_atual * (percentual_aumento_atual / 100);
        percentual_aumento_atual *= 2; 
    }

    printf("O salario atual do funcionario é: R$ %.2f\n", salario_atual);

    return 0;
}

