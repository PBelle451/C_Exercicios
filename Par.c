#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Insira um n�mero: ");
	scanf("%d", &num);
	if (num % 2 == 0){
		printf("� par");
	} else {
		printf("� impar");
	}
	return 0;
}
