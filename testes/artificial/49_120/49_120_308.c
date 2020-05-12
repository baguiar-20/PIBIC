#include<stdio.h>
#include<math.h>

int main(){

	int i, produto, soma;
	int A[10], B[10];

	soma=0;
	
	for(i=1; i<10+1; i++)
	 {
	   scanf("%d", &A[i]);
	 }

	for(i=1; i<10+1; i++)
	 {
	   scanf("%d", &B[i]);
	 }

	for(i=1; i<10+1; i++)
	 {
	   produto=A[i]*B[i];
	   soma=soma+produto;
	 }

	printf("%d", soma);
}
