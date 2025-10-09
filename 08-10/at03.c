#include <stdio.h>

int main()
{
    int vetor[18];
    int matriz[3][6];
    int linha, coluna;
    int contador = 0;

    printf("Eberth da Silva Rodrigues\n");

    for (int i = 0; i < 18; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 6; coluna++)
        {
            matriz[linha][coluna] = vetor[contador];
            contador++;
        }
    }
    
//Definir a matriz -> //
    printf("\nMatriz 3x6:\n");
    for (linha = 0; linha < 3; linha++)//
    {
        for (coluna = 0; coluna < 6; coluna++)//
        {
            printf("%3d ", matriz[linha][coluna]);//
        }
        printf("\n");//
    }

    return 0;
}