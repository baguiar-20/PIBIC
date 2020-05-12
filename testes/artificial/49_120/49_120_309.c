#include<stdio.h>

int main()
{

	int n[10], m[10],i,p;
	p=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}

	for(i=0;i<10;i++)
	{
		scanf("%d",&m[i]);
	}

	for(i=0;i<10;i++)
	{
	p=n[i]*m[i]+p;
	}

	printf("%d",p);
}
