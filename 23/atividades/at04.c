#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
float n1,n2,n3,n4, s;
printf("Eberth da Silva Rodrigues\n ");

printf("Digite um numero: ");
scanf("%f%*c", &n1);

printf("\nDigite um numero: ");
scanf("%f%*c", &n2);

printf("\nDigite um numero: ");
scanf("%f%*c", &n3);

printf("\nDigite um numero: ");
scanf("%f%*c", &n4);

s=n1+n2+n3+n4;

printf("soma dos 4 numeros é igual a: %0.2f", s);

return 0;
}
