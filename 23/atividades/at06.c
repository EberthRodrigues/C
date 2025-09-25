#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
float n1,n2,n3, p1,p2,p3, media;
printf("Eberth da Silva Rodrigues\n ");

printf("Digite sua primeira nota: ");
scanf("%f%*c", &n1);
printf("Digite o peso da primeira nota: ");
scanf("%f%*c", &p1);

printf("\nDigite sua segunda nota: ");
scanf("%f%*c", &n2);
printf("Digite o peso da segunda nota: ");
scanf("%f%*c", &p2);

printf("\nDigite sua terceira nota: ");
scanf("%f%*c", &n3);
printf("Digite o peso da terceira nota: ");
scanf("%f%*c", &p3);


media=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);

printf("Media Final: %0.2f", media);

return 0;
}
