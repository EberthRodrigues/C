#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número qualquer: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número menor que zero!\n");
	    } else if (numero < 10) {
	        printf("Número maior ou igual a 0 e menor que 10.\n");
	    } else if (numero < 100) {
	        printf("Número maior ou igual a 10 e menor que 100.\n");
    } else {
        printf("Número maior ou igual a 100.\n");
    }


return 0;
}
