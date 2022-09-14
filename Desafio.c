#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao, cont1, cont2, cont3, cont4, cont5;
	while(opcao > 0){
		printf("Selecione um candidato: \n1-Jair Rodrigues\n2-Carlos Luz\n3-Neves Rocha\n4-Nulo\n5-Branco\n6-Encerrar\n");
		scanf("%d", &opcao);
		if (opcao == 1){
			cont1++;
		}
		if (opcao == 2){
			cont2++;
		}
		if (opcao == 3){
			cont3++;
		}
		if(opcao == 4){
			cont4++;
		}
		if(opcao == 5){
			cont5++;
		}
		if(opcao == 6){
			break;
		}
	}
	printf("\nJair Rodrigues: %d\nCarlos Luz: %d\nNeves Rocha: %d\nNulo: %d\nBranco: %d", cont1, cont2, cont3, cont4, cont5);
	return 0;
	}
