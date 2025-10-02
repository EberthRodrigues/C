#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int ano_contratado = 2020, ano_desejado, cont = 0;
	float salario = 1000, aumento = 0.015;
	
    printf("Eberth da Silva Rodrigues");
	printf("Digite o ano que você deseja saber o salário do funcionário com  aumento(s): ");
	scanf("%d%*c", &ano_desejado);
	
	printf("\nO funcionário foi contratado em %d, recebendo R$%0.2f!", ano_contratado, salario);
	
	while (ano_contratado < ano_desejado) {
		salario += salario * aumento;
		aumento += aumento;
		cont++;
		ano_contratado++;	
	}
	
	printf("\nAo salário do funcionário é de: R$%0.2f",  salario);

}