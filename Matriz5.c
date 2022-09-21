#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz2[3] [3];
	int matriz1[3] [3], i, j;
	float soma;
	printf("\nMatriz 1: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nElemento[%d][%d] = ", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	printf("\nMatriz 2: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nElemento[%d][%d] = ", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	printf("\nSoma: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			soma = matriz1[i][j] + matriz2[i][j];
		}
	}
	printf("\n%.2f", soma);
	return 0;
}
