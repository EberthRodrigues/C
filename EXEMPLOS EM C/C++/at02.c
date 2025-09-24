#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
float deposito, taxa, rendimento, total;
//
printf("Digite o valor do deposito:");
scanf("%f%*c", &deposito);

printf("\nDigite o valor da taxa: ");
scanf("%f%*c", &taxa);

rendimento = deposito * (taxa/100);
total = rendimento + deposito;

printf("\nValor do rendimento:%2f", rendimento);
printf("\nValor total do deposito com rendimento: %2f", total);

getchar();
return 0;
}
