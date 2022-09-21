#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[6] [6], i, j, cont;
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			printf("\nElemento[%d][%d] = ", i, j);
			scanf("%d", &matriz[ i ] [ j ]);
		}
	}
	
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			if(matriz[i][j] > 10){
				cont++;
			}
		}
	}
	printf("\nTotal de elementos: %d\n", cont);
	return 0;
}
