#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int codigoCidade, numeroVeiculos, numeroAcidentes;
	int maiorIndiceAcidentes = -1, menorIndiceAcidentes = 1000000;
	int cidadeMaiorIndice = -1, cidadeMenorIndice = -1;
	int totalVeiculos = 0, totalAcidentesMenos2000 = 0, cidadesMenos2000 = 0;
	printf("Eberth da Silva Rodrigues");
	for ( int i =0; i < 5; i++ ){
		
		printf("Digite o codigo da city: ");
		scanf("%d%*c", &codigoCidade);
		
		printf("Digite numero de veiculos para passeio: ");
		scanf("%d%*c", &numeroVeiculos);
		
		printf("Digite o numero de acidentes: ");
		scanf("%d%*c", &numeroAcidentes);
		
		if (numeroAcidentes > maiorIndiceAcidentes){
			maiorIndiceAcidentes = numeroAcidentes;
			cidadeMaiorIndice  = codigoCidade;
	}	
	if (numeroAcidentes < menorIndiceAcidentes){
		
		menorIndiceAcidentes = numeroAcidentes;
		cidadeMenorIndice = codigoCidade;
	}
	
	totalVeiculos += numeroVeiculos;
	
		if (numeroVeiculos < 2000);
	}
	



float mediaVeiculos = totalVeiculos;
float mediaAcidentes  = (cidadesMenos2000 > 0) ? (totalAcidentesMenos2000 / (float)cidadesMenos2000): 0;

printf ("---------------------------------------------------------------------------------------------");

printf("\nMaior indice de acidentes : %d acidentes na cidades %d\n", maiorIndiceAcidentes, cidadeMaiorIndice);
printf("Menor indice de acidentes : %d acidentes na cidades %d\n", menorIndiceAcidentes, cidadeMenorIndice);

printf("Media de veiculos nas cinnco cidades: %0.2f\n", mediaVeiculos);
printf("Media de acidentes nas cidades com menos de 2000 veiculos : %0.2f", mediaAcidentes);

}

