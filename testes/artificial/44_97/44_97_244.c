#include <stdio.h>

int main(int argc, char **argv)
{
	int vet[1000],i,n;
	scanf ("%d",&n);
	 
	for (i=1;i<=n;i++){
		scanf ("%d",&vet[i]);
	}
	
	printf ("\n");
	
	for (i=n;i>=1;i-=1){
		printf ("%d ",vet[i]);
	}
	return 0;
}

