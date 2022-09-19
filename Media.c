#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, cont = 0, cont2 = 0, idade = 0;
	float media=0, soma=0, vetor[10];
	for(i = 0; i < 10; i++){
		printf("\nInsira a idade: ");
		scanf("%d", &idade);
		printf("\n");
		cont++;
		vetor[cont2] = idade;
		soma += vetor[cont2];
		cont2++;
	}
	media = soma / cont;
	printf("\nMedia de idades: %f", media);
	return 0;
}
