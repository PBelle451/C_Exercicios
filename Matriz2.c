#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, n, matriz[n][n], soma_matriz = 0, soma_diagonal = 0;

    printf("Informe o valor de n:");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Informe o valor para a posicao %d x %d:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            soma_matriz += matriz[i][j];

            if (i == j){
                soma_diagonal += matriz[i][j];
            }
        }
    }

    printf("\nSoma dos valores da matriz: %d\n", soma_matriz);
    printf("\nSoma dos valores da diagonal principal: %d\n", soma_diagonal);

    return 0;
}
