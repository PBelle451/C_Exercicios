#include <stdio.h>
#include <stdlib.h>

int main(){
	int alunos, nota1, nota2, nota3, i=0;
	double media;
	float soma;
	printf("Insira o numero de alunos: ");
	scanf("%d", &alunos);
	while(i < alunos){
		printf("\nInsira a primeira nota: ");
		scanf("%d", &nota1);
		soma++;
		printf("\nInsira a segunda nota: ");
		scanf("%d", &nota2);
		soma++;
		printf("\nInsira a terceira nota: ");
		scanf("%d", &nota3);
		soma++;
		i++;
	}
	media = soma / alunos;
	printf("\nMedia da turma: %lf", media);
	return 0;
}
