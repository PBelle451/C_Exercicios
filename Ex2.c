#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, i=1;
	double media;
	
	while(i > 0){
		printf("Insira um numero maior que zero: ");
		scanf("%d", &i);
		num++;
		if(i == 0){
			break;
		}
	}
	media = (num + num) / num;
	printf("\nContador: %d", num);
	printf("\nMedia: %lf", media);
	return 0;
}
