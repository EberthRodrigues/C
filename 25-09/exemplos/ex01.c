#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
char operador;
float num1, num2;
	printf("Digite um numero e escolha um operador e depois digite outro numero: ");
	scanf("%f %c %f", &num1,&operador,&num2);

switch (operador){
	case '+':
	printf(" = %2f", num1 + num2);
	break;
	
	case '-':
	printf(" = %2f", num1 - num2);
	break;
	
	case '*':
	printf(" = %2f", num1 * num2);
	break;
	
	case '/':
		if (num2 != 0 )
			printf(" = %2f", num1/num2);
		else
		printf("IMPOSSIVEL DIVIDIR POR ZERO");
	
	break;
	
	default:
	printf("OPERADOR INVALIDO!");
	
}

	
	
return 0;
}