# include <stdio.h>

int main () {
	int i, alunos = 0;
	float notas[3], media, media_geral = 0;

	printf ("Este programa calcula a média ponderada das notas de cada aluno em três provas de peso 1, 2 e 3, respectivamente, e a média aritmética das notas da turma.\n");
	while (alunos <= 0) {
		printf ("Digite o número de alunos: ");
		scanf ("%d", &alunos);
	}

	for (i = 1; i <= alunos; i++) {
		printf("Digite as notas do aluno %d nas sucessivas provas, separadas por espaço: ", i);
		scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);
		media = (notas[0] + 2 * notas[1] + 3 * notas[2]) / 6;
		printf ("Média ponderada: %f\n", media);
		media_geral += media / alunos;
	}

	printf("Média aritmética da turma: %f\n", media_geral);
	return 0;	
}
