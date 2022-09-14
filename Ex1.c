#include <stdio.h>
#include <stdlib.h>
#define infinite for(;;)

int main(){
	int num;
	
	infinite
	{
		printf("\nInsira 1 ou 0: ");
		scanf("%d", &num);
		if(num == 1 || num == 0){
			printf("\n");
		} else {
			printf("\nInsira uma nova opcao");
		}
}
return 0;	
}
