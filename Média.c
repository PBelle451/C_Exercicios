#include<stdio.h>
#include<stdlib.h>

int main (void) {
	float nota1, nota2, nota3;
	float media;
	while (1) {
		printf("\nDigite o valor da primeira nota: ");
		scanf("%f", &nota1);
		if (nota1 > 10 || nota1 < 0) {
			printf("Digito invalido");
			continue;
		}
		printf("\nDigite o valor da segunda nota: ");
		scanf("%f", &nota2);
		if (nota2 > 10 || nota2 < 0) {
			printf("Digito invalido");
		}
		printf("\nDigite o valor da terceira nota: ");
		scanf("%f", &nota3);
		if (nota3 > 10 || nota3 < 0) {
			printf("Digito invalido");
		}
	media = (nota1 + nota2 + nota3) / 3;
	if(media > 5.0) {
		printf("Aluno aprovado");
	}
	else {
		printf("Aluno reprovado");
	}
	}
	return 0;
}
