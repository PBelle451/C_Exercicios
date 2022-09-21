#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3] [3], i, j, cont1, cont2;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\nElemento[%d][%d] = ", i, j);
			scanf("%d", &matriz[ i ] [ j ]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(matriz[i][j] % 2 == 0){
				cont1++;
			}
			if(matriz[i][j] % 2 != 0){
				cont2++;
			}
		}
	}
	printf("\nNumeros Pares: %d\n", cont1);
	printf("\nNumeros Impares: %d\n", cont2);
	return 0;
}
