#include <stdio.h>

int main()
{
	int vet[1000], aux[1000], n, i, j;
	scanf("%d",&n);
	
	for (i=0; i<=n-1; i++){
		scanf("%d",&vet[i]);
			
	}
	j=0;
	i=n-1;
	while (i != -1){
		aux[j]=vet[i];
		i--;
		j++;	
	}
	
	for (i=0; i<=n-1; i++){
		printf("%d ",aux[i]);
	
	}
	 
	
	return 0;
}

