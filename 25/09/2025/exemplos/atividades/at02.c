#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float salario, imposto, aumento;

    printf("Eberth da Silva Rodrigues");
    printf("\n");
    printf("\nMenu principal!");
    printf("\n1 - Menu de imposto.");
    printf("\n2 - Menu de Novo salário.");
    printf("\n3 - Menu de classificação.");

    printf("\n\nDigite uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n--- CÁLCULO DE IMPOSTO ---\n");
        printf("Digite o valor do salário : ");
        scanf("%f", &salario);

        if (salario <= 500)
        {
            imposto = salario * 0.05;
            printf("Imposto de 5%%: R$ %.2f\n", imposto);
            printf("Salário com imposto: R$ %.2f\n", salario - imposto);
        }
        else if (salario <= 850)
        {
            imposto = salario * 0.10;
            printf("Imposto de 10%%: R$ %.2f\n", imposto);
            printf("Salário com imposto: R$ %.2f\n", salario - imposto);
        }
        else
        {
            imposto = salario * 0.15;
            printf("Imposto de 15%%: R$ %.2f\n", imposto);
            printf("Salário com imposto: R$ %.2f\n", salario - imposto);
        }
        break;

    case 2:
        printf("\n--- NOVO SALARIO ---\n");

        printf("Digite o valor do salario: ");
        scanf("%f%*c", &salario);

        if (salario >= 1500)
        {
            aumento = 25;
            printf("Salario de : %2f", salario + aumento);
        }

        else if (salario >= 750 && salario <= 1500)
        {
            aumento = 50;
            printf("Salario de : %2f", salario + aumento);
        }
        else if (salario >= 450 && salario <= 749)
        {
            aumento = 75;
            printf("Salario de : %2f", salario + aumento);
        }
        else
        {
            aumento = 100;
            printf("Salario de : %2f", salario + aumento);
        }
        break;

    case 3:
        printf("\n--- CLASSIFICAÇÃO  ---\n");

        printf("Digite o valor do salario: ");
        scanf("%f%*c", &salario);

        if (salario < 700)
        {
            printf("Mal remunerado!");
        }

        else
        {
            printf("Bem remunerado!");
        }
        break;

    default:
        printf("Erro 404!\n");
    }

    return 0;
}
