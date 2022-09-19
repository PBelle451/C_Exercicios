#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n=0;
	printf("Insira um valor: ");
	scanf("%d", &n);
	for(i = 1; i <= 10; i++){
		printf("%i X %i = %i\n", i, n, n * i);
	}
	return 0;
}
