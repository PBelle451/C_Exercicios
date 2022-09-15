#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;
	printf("Numeros pares: ");
	while(i <= 100){
		i++;
		if(i % 2 == 0){
			printf("\n%d", i);
		}
	}
	return 0;
}
