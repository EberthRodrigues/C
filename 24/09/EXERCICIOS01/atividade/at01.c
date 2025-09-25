#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

float a,b,c;

printf("Eberth da Silva Rodrigues\n ")

printf("Digite um nunmero: ");
scanf("%f%*c", &a);

printf("Digite um nunmero: ");
scanf("%f%*c", &b);

printf("Digite um nunmero: ");
scanf("%f%*c", &c);

	if (a > b &&  a > c)
		printf("numero %f é maior que %.2f e %f.", a,b,c);
	
	else if(b > c)
		printf("numero %f é maior que %f e %f.", b,a,c);
		
	else 
	printf("numero %f é maior que %f e %f.", c,a,b); 



return 0;
}
