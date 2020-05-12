#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 100

int main(void)
{
	int i, k=1, x, j,vet[max], cont = 0, aux = 0;

	scanf("%d", & x);

	for (i=1;i<=x;i++)
	{
		for (j=1;j<=i;j++)
		{
			if ((i%j)==0)
			{
				cont++;
			}
		}
		if (cont == 2)
		{
			vet[k] = i;
			k++;
		}
		cont = 0;
	}
	
	for (j=1;j<=k-1;j++)
	{
		for (i=1;i<=x;i++)
		{
			if(x == vet[j]^i)
			{
				aux = 1;
			}
		}
	}
	
	if (aux == 1)
		printf("potencia prima");
	else
		printf("nao potencia prima");
	

printf("\n");
	
}

