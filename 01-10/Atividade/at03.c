#include <stdio.h>
#include <locale.h>

main() {
		setlocale(LC_ALL, "Portuguese");
	float n1, n2, mediaAluno;
	int contadorAlunos = 1, totalAlunos, totalAprovados, totalExames, totalClasse, mediaClasse;
	
	printf("Eberth da Silva Rodrigues\n")
	while (contadorAlunos <= 6) {
		printf("\n----------------");
		printf("\nDigite a 1ª nota do aluno %d: ", contadorAlunos);
		scanf("%f%*c", &n1);
		
		printf("\nDigite a 2ª nota do aluno %d: ", contadorAlunos);
		scanf("%f%*c", &n2);
		
		mediaAluno = (n1+n2) / 2;
		totalClasse += mediaAluno;
		
		printf("\n\nA média aritmética do aluno %d é: %0.2f", contadorAlunos, mediaAluno);
		
		if (mediaAluno < 3) {
			printf(" | Situação: Reprovado");
			totalAlunos++;
		} else if (mediaAluno <= 7) {
			printf(" | Situação: Exame");
			totalExames++;
		} else {
			printf(" | Situação: Aprovado");
			totalAprovados++;
		}
		
		contadorAlunos++;
	}
	
	mediaClasse = totalClasse/6;
	
	printf("\n\n----------------");
	printf("\nTotal de alunos Aprovados: %d", totalAprovados);
	printf("\nTotal de alunos em Exame: %d", totalExames);
	printf("\nTotal de alunos Reprovados: %d", totalAlunos);
	printf("\nMédia geral da classe: %0.2f", mediaClasse);
	

}