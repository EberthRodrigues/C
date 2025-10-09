#include <stdio.h>

int main(){
	
	int vetor [4], matriz[2][2], linha, coluna, contador = 0;

printf("Eberth da Silva Rodrigues\n");

	for (int i = 0; i < 4; i++){
		printf("Digite o valor do elemento %d: ", i + 1);
		scanf("%d%*c", &vetor[i]);
	}	
	
	for (linha = 0; linha < 2; linha++ ){
		for(coluna = 0; coluna < 2; coluna++){
			matriz[linha][coluna]= vetor[contador];
			contador++;
		}
	}
	printf("\n");
for(linha = 0; linha < 2; linha++){
	for(coluna = 0; coluna < 2; coluna++){
	printf("%3d",matriz[linha][coluna]);	
	}
printf("\n");
}	
return 0;
}