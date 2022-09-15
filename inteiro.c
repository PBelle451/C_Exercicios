#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i=0;
	printf("\nInsira um inteiro: ");
	scanf("%d", &n);
	while(i < n){
		if(i % 2 != 0){
			printf("\t%d", i);
		}else if (i % 2 == 0){
			printf("\t%d", i);
		}
		i++;
}
return 0;
}
