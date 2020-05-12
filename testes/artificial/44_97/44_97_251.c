#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a[999];
	int t,i;
	scanf("%d",&t);
	for (i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}	
	for (i=t-1; i>=0;i--)	
	printf(" %d",a[i]);
	return 0;
}
		
	
	

