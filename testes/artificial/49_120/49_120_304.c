#include<stdio.h>
#include<stdlib.h>

main(void)
{

	int N[10],M[10];
	int i,P[10],soma;

	
	for(i=0;i<10;i++)
	{
	scanf("%d",&N[i]);
	}

	
	for(i=0;i<10;i++)
	{
	scanf("%d",&M[i]);
	}

	
	for(i=0;i<10;i++)
	{
	
	P[i]=N[i]*M[i];
		
	}
	soma=0;
	
	for(i=0;i<10;i++)
	{
	soma=soma+P[i];
	}
	
	printf("%d",soma);
}
