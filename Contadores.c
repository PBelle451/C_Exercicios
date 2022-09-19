#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n, numero, cont = 0, cont2=0;
	printf("Quantos numeros vamos trabalhar?: ");
	scanf("%d", &n);
	for(i = 0; i <= n; i++){
		printf("\nInsira o numero: ");
		scanf("%d", &numero);
		if (numero % 2 == 0){
			cont++;
		}
		if (numero % 2 != 0){
			cont2++;
		}
	}
	printf("\nNumeros pares: \n%d", cont);
	printf("\nNumeros impares: \n%d", cont2);
	return 0;
}
