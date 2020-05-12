/*
Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos informados pelo usuáriio. Faça um programa em C que calcule o produto escalar de A por B. (Isto é, P = A[1]*B[1] + A[2]*B[2] + ... A[10]*B[10]). 
*/
#include<stdio.h>
int main(){
	int a[10],b[10],i;
	int p=0;

	for (i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++){
		scanf("%d",&b[i]);
	}
	for (i=0;i<10;i++){
		p += a[i] * b[i]; 
	}

	printf("%d",p);
	return 0;
}
