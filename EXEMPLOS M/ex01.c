
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
int x = 0;
do{

printf("\nDigite o valor do %d numero: ", x +1);
scanf("%d%*c", &x);
x=x+1;
}
while(x > 5);
	printf("Valor do numero após o ultimo digitado: %d", x);
	
}