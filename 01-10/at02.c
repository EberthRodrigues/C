#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ano_contratacao = 2020;
    int ano_atual;
    float salarioInicial = 1000.0;
    float percentual_aumento = 1.5;
    float salario_atual = salarioInicial;

	printf("Eberth da Silva Rodrigues");
    printf("\nDigite o ano atual: ");
    scanf("%d", &ano_atual);
    if (ano_atual < ano_contratacao)
    {
        printf("Ano invalido. O ano atual deve ser maior ou igual a %d.\n", ano_contratacao);
        return 1;
    }

while (ano_contratacao < ano_atual );{
	ano_contratacao++;
	salario_atual += salario_atual * (percentual_aumento / 100.0);
	
	if(ano_contratacao >= 2022){
		
		percentual_aumento *= 2;
	
	}
}
    printf("O salario atual do funcionario em %d é de R$ %.2f\n", ano_atual,salario_atual);

    return 0;
}

