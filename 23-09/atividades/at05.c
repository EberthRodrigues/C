#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
float n1,n2,n3, media;
printf("Eberth da Silva Rodrigues\n ");

printf("Digite sua primeira nota: ");
scanf("%f%*c", &n1);

printf("\nDigite sua segunda nota: ");
scanf("%f%*c", &n2);

printf("\nDigite sua terceira nota: ");
scanf("%f%*c", &n3);


media=(n1+n2+n3)/3;

printf("Media Final: %0.2f", media);

return 0;
}
