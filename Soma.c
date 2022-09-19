#include <stdio.h>
#include <stdlib.h>

int main(){
	int final, i, soma = 0;
	printf("Insira um numero final: ");
	scanf("%d", &final);
	for(i = 0; i <= final; i++){
		soma = soma + i;
	}
	printf("Soma: %d", soma);	

	return 0;
}
