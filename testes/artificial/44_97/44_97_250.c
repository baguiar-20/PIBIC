#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int tamanho;
	int vet[100];
	int i;
	
	scanf("%d", &tamanho);
	//vet = (int*) malloc(sizeof(int)*tamanho);//retorna void*

	for(i=0; i<tamanho; i++) {
		scanf("%d", &vet[i]);
	}
	
	for(i=tamanho-1; i>=0; i--) {
		printf("%d ", vet[i]);
	}
	
	return 0;
}
