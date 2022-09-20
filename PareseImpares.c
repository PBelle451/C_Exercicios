#include <stdio.h>
#include <stdlib.h>

int main(){
	float par, impar;
	int array[10];
	int n, i;
	for(i=0;i < 10; i++){
		printf("\nInsira o numero: ");
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0){
			array[i] * 3;
		} else {
			array[i] += 1;
		}
	}
	printf("\nArray: %d", array);
	
	return 0;
}
