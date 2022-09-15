#include <stdio.h>
#include <stdlib.h>

int main(){
	float pi = 3.14;
	int r;
	printf("Insira o valor de raio: ");
	scanf("%d", &r);
	if (r < 0){
		printf("Erro");
	}
	float a = pi * (r*r);
	printf("r=%d", r);
	printf("resposta: %f", a);
}
