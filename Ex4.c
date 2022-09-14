#include <stdio.h>
#include <stdlib.h>

int main(){
	int senha, novo;
	printf("Insira a senha: ");
	scanf("%d", &senha);
	while(novo){
		printf("\nInsira a sua senha: ");
		scanf("%d", &novo);
		if(novo == senha){
			printf("\nSenha Correta");
			break;
		} else {
			printf("\nSenha incorreta");
		}
	}
	return 0;
}
