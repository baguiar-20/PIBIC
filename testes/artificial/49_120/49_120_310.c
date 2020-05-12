/*
Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos informados pelo usuário.
Faça um programa em C que calcule o produto escalar de A por B.
(Isto é, P = A[1]*B[1] + A[2]*B[2] + ... A[10]*B[10]).
*/

# include <stdio.h>

int main(){
	int i, j, n[10], m[10], sum=0;
	for(i=1;i<=10;i++){
		scanf("%d", &n[i]);
	}
	
	for(j=1;j<=10;j++){
		scanf("%d", &m[j]);	
		sum = (n[j]*m[j])+sum;
	}
	
	printf("%d", sum);

	return 0;
}

