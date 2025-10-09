#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

int idade;

printf("Eberth da Silva Rodrigues\n ");

printf("Digite sua idade: ");
scanf("%d%*c", &idade);

	if (idade < 11){
		printf("Você é criança ");
}
	
	else if (idade >= 12 && idade <=18){	
		printf("Você é adolescente");	
}
	else if (idade >= 18 && idade <= 24){
		printf("Você é Jovem");
}
	else if (idade >= 25 && idade <= 59){
		printf("Voce é adulto");
}
	else if(idade > 60) {
	printf("Você é idoso");
}

	else 
		printf("idade invalida!")
return 0;
}
