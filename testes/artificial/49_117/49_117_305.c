#include<stdio.h>
#include<math.h>
int isPrimo(int n){
	int cont =0,i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			cont++;
		}
	}

	return (cont==2)?1:0;
}
int potencia(int n,int aux,int i){
	int b;
	b = pow(aux,i);
	return (n==b)?1:0;
}
int main(){
	int n,potPrimo=0;
	float aux,exp,i;
	
	scanf("%d",&n);
	for (i=1;i<n;i++){
		if(isPrimo(i)){
			exp = 1/i;
			aux = pow(n, exp);
			//printf("exp: %f \n i: %f \n aux: %f potencia: %d \n\n",exp,i,aux,potencia(n, aux, i));	
			if ( potencia(n, aux, i) && isPrimo(aux)){
				potPrimo = 1;
			}
		}
	}
	if(potPrimo){
		printf("potencia prima");
	}else{
		printf("nao potencia prima");
	}
} 
/*
a n = 25
b aux = 5
c i  = 2
*/

