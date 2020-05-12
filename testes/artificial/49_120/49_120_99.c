#include<stdio.h>
#include<math.h>

int main()
{
	int n[10], m[10];
	int i, soma;
	
	soma=0;

	for(i=0; i<10; i++)
	{
		scanf("%d", &n[i]);
	}
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &m[i]);
	}
	
	for(i=0; i<10; i++)
	{
		soma=(n[i]*m[i]) + soma;
	}
	
	printf("%d", soma);
	
	return 0;
}
