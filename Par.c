#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Insira um número: ");
	scanf("%d", &num);
	if (num % 2 == 0){
		printf("É par");
	} else {
		printf("É impar");
	}
	return 0;
}
