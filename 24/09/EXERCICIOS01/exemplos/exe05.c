#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float a,b;

printf("Digite primeiro numero: ");
scanf("%f", &a);

printf("\nDigite o segundo numero: ");
scanf("%f", &b);

if (b == 0)
printf("nao posso dividir por zero!");
else 
printf("Resultado: %f",a/b );
return 0;
}
