#include<stdio.h>
#include<math.h>

int main()
{
	int x;	

	scanf("%d",&x);
		
	if(potencia_prima(x)==0)
		printf("potencia prima\n");
	else 
		printf("nao potencia prima\n");

	return 0;
}

int potencia_prima(int num)
{
	int i, j;
	int p, k;
	
	p=0;
	k=0;	
	
	for(i=0; i<(num+1); i++){		
		if (primo(i+1))
		{
			for(j=(i+1); j<(num+1); j++){
				if (pow(i,j)==num){
				   p=i;
				   k=j;						
				}	
			}
		}		
	}

	if((p!=0) && (k!=0))
		return 1;
	else
		return 0;	
		
}

int primo(int num)
{
	int i;
	int cont=0;

	for(i=0; i<num; i++)
	{
		if  ((num%(i+1)) == 0)
		{
			cont=cont+1;
		} 
	}

	if (cont==2)
		return 1;
	else
		return 0;
}
