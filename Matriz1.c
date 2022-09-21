#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[2] [2], i, j;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("\nElemento[%d][%d] = ", i, j);
			scanf("%d", &matriz[ i ] [ j ]);
		}
	}
	printf("\nSaida:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n\nElemento[%d][%d] = %d\n", i, j, matriz[ i ][ j ]);
		}
	}
	
	return 0;
}
