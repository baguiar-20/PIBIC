# include <stdio.h>

int main(){
	int i, n;
	
	//printf("Informe o tamanho do vetor: ");
	int vet[100];
	
	scanf("%d", &n);
	
	for(i=0; i <= n-1; i++){
		//printf("\nInforme o elemento da posicao %d do Vetor: ", i);
		scanf("%d", &vet[i]);
	}
	//printf("O vetor na forme inversa fica na forma: \nVet[");
	
	for(i=n-1; i>=0; i--){
		 printf("%d ", vet[i]);
	}
	//printf("]\n\n");
}
