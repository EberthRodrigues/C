#include <stdio.h>
#include <string.h>

int main (){
    float salario, aumento;
    printf("Eberth da Silva Rodrigues\n ");

    printf("Digite seu salario: ");
    scanf("%f%*c", &salario);
    
    aumento = salario + (salario*0.25);
    printf("\nSeu salario com aumento é de: %0.2f", aumento);
    

getchar();
return 0;
} 
