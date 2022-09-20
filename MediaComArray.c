#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float notas[10];
	float media, soma=0;
	printf("\nEntre 10 notas: ");
	for(i=0;i < 10;i++){
		printf("\nEntra a %d nota: ", i+1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	for(i=0;i<=10;i++){
		printf("\nNotas: %.2f", notas[i]);
	}
	media = soma / 10;
	printf("\nMedia: %.2f", media);
	return 0;
}
