#include <stdio.h>
#include <stdlib.h>

int main(){
	int time;
	printf("INSIRA QUE HORAS SAO: ");
	scanf("%d", &time);
	if (time < 10){
		printf("Good Morning");
	} else if (time < 18){
		printf("Good Afternoon");
	} else {
		printf("Good Night");
	}
	return 0;
}
