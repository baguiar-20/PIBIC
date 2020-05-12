#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10000

int main()
{
	int i, n, vet[N];
	
	//printf("Digite o tamanho do vetor:");
	scanf("%d", &n);
	
	//printf("Digite os elementos do vetor: ");
	for(i=0; i<n; i++)
	{	
		scanf("%d", &vet[i]);
	}
	
		for(i=n-1; i>=0; i--)
	{
			printf("%d \t", vet[i]);		
	}


	return 0;
}
