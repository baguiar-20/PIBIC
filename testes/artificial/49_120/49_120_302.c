#include <stdio.h>
#include <stdlib.h>
#define max 10

int main(void)
{
	int i, N[max],M[max],c[max], soma;
	soma = 0;

	for(i=0;i<max;i++)
	{
		scanf("%d",&N[i]);	
	}	

	for(i=0;i<max;i++)
	{
		scanf("%d",&M[i]);
	}
	
	for(i=0;i<max;i++)
	{
		c[i] = M[i]*N[i];
	}

	for(i=0;i<max;i++)
	{
		soma += c[i];
	}
	
	printf("%d",soma);
}


