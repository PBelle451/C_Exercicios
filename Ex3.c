#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, guarda_maior, guarda_menor;
	int i=1;
	
	printf("Entre com o 1o numero inteiro: ");
	scanf("%i", &numero);
	guarda_maior=numero;
	guarda_menor=numero;
	
	while(i < 10){
		printf("\nEntre com o %dnumero inteiro: ",i+1);
		scanf("%i", &numero);
		if(numero>guarda_maior){
			guarda_maior=numero;
		} else if (numero<guarda_menor){
			guarda_menor=numero;
		}
		i++;
	}
	return 0;
}
