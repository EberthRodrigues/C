#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
int dia, mes;

	printf("Dia de nascimento: ");
	scanf("%d", &dia);
	
	printf("\nMes de nascimento: ");
	scanf("%d", &mes);


switch (mes){
	case 1:
		if (dia < 20)
			printf("Seu signo é Capricornio ");
		else 
			printf("Seu signo é Aquario");
		break;
		
		
	case 2:
		if (dia < 19)
			printf("Seu signo é Aquario ");
		else 
			printf("Seu signo é Peixes");
		break;
		
		
	case 3:
		if (dia < 21)
			printf("Seu signo é Peixes ");
		else 
			printf("Seu signo é Aires");
		break;
		
		
	case 4:
		if (dia < 20)
			printf("Seu signo é Aires ");
		else 
			printf("Seu signo é Touro");
		break;
		
		
	case 5:
		if (dia < 21)
			printf("Seu signo é Touro ");
		else 
			printf("Seu signo é Gemeos");
		break;
		
		
	case 6:
		if (dia < 22)
			printf("Seu signo é Gemeos ");
		else 
			printf("Seu signo é Cancer");
		break;
		
		
	case 7:
		if (dia < 23)
			printf("Seu signo é Cancer ");
		else 
			printf("Seu signo é Leao");
		break;
		
		
	case 8:
		if (dia < 23)
			printf("Seu signo é Leao ");
		else 
			printf("Seu signo é Virgem");
		break;

		
	case 9:
		if (dia < 23)
			printf("Seu signo é Virgem ");
		else 
			printf("Seu signo é Libra");
		break;
		
		
	case 10:
		if (dia < 23)
			printf("Seu signo é Libra ");
		else 
			printf("Seu signo é Escorpiao");
		break;
		
		
	case 11:
		if (dia < 22)
			printf("Seu signo é Escorpiao ");
		else 
			printf("Seu signo é Sagitario");
		break;
		
		
	
	case 12:
		if (dia < 22)
			printf("Seu signo é Sagitario ");
		else 
			printf("Seu signo é Capricornio");
		break;
		
	
	
	
	default:
	printf("INVALIDO!");
	
}

	
	
return 0;
}