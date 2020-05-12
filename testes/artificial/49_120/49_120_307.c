/*
Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos informados pelo usuáriio. Faça um programa em C que calcule o produto escalar de A por B. (Isto é, P = A[1]*B[1] + A[2]*B[2] + ... A[10]*B[10]).
*/

#include<stdio.h>

int main(){

	int N[10],M[10];
	int i,p=0;

	for(i=0;i<10;i++){
		scanf("%d",&N[i]);
	}
	for(i=0;i<10;i++){
		scanf("%d",&M[i]);
	}

	for(i=0;i<10;i++){

		p += N[i]*M[i]; // é igual a p = p + N[i]*M[i];
	}

	printf("%d",p);
};
