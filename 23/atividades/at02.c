#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
float salario, gratificacao, imposto, salarioReceber;
printf("Eberth da Silva Rodrigues\n ");
printf("Digite o salario do funcionario:");
scanf("%f%*c", &salario);

gratificacao = salario * 0.05;
imposto = salario * 0.07;
salarioReceber = salario + gratificacao - imposto;

printf("\nSalario com gratificação é de: %0.2f", gratificacao);
printf("\nSalario com imposto: %0.2f", imposto);
printf("\nSalario a receber : %0.2f", salarioReceber);

getchar();
return 0;
}

