#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float n_nasce;
    float contador_morte_m = 0, contador_morte_f = 0;
    float tempo_vida;
    char sexo;

    printf("Digite o número de crianças nascidas no período: ");
    scanf("%f", &n_nasce);

    for (int i = 0; i < n_nasce; i++) {
        printf("\nDigite o sexo da %dª criança (m ou f): ", i + 1);
        scanf(" %c", &sexo);  

        printf("Digite o tempo de vida da criança em meses: ");
        scanf("%f", &tempo_vida);

        if ((sexo == 'm' or sexo == 'M') && tempo_vida <= 24) {
            contador_morte_m++;
        } else if ((sexo == 'f' or sexo == 'F') && tempo_vida <= 24) {
            contador_morte_f++;
        }
    }

    float total_mortes = contador_morte_m + contador_morte_f;

    printf("\taxa de crianças do sexo masculino mortas: %.2f%%", (contador_morte_m / n_nasce) * 100);
    printf("\taxa de crianças do sexo feminino mortas: %.2f%%", (contador_morte_f / n_nasce) * 100);
    printf("\taxa total de crianças que viveram até 24 meses: %.2f%%", (total_mortes / n_nasce) * 100);

    printf("\n\nEberth da Silva Rodrigues\n");

    return 0;
}
