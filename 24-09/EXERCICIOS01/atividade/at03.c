include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

float a,b;

printf("Eberth da Silva Rodrigues\n ");

printf("Digite um numero: ");
scanf("%f%*c", &a);

printf("\nDigite outro numero: ");
scanf("%f%*c", &b);

	if (a > b){	
		printf("Numeros ordenados: %0.1f e %0.1f", a,b);
}

	else if (a < b) {
		printf("Numeros ordenados: %0.1f e %0.1f", b,a);
}

	else{
		printf("Os dois numeros sao iguais!");
	}


return 0;
}
