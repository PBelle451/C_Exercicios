#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int A[10], B[10];
	
	for ( i = 0; i < 10; ++i)
	{
		printf("Digite o valor %i do vetor A: ", i);
		scanf("%i", &A[i]);
		B[i] = A[i] * 10;
	}
	
	printf("\nVetor B: ");
	
	for ( i = 0; i < 10; ++i)
	{
		printf("%i ", B[i]);
	}
	
	return 0;
}
