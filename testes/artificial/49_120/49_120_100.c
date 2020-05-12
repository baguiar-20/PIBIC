//Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos informados pelo usuáriio. 
//Faça um programa em C que calcule o produto escalar de A por B. (Isto é, P = A[1]*B[1] + A[2]*B[2] 
//+ ... A[10]*B[10]).

#include <stdio.h>
#define a 10

int main() {

	int N[a], M[a], i, P;
	P=0;

	//loop para ler o vetor N
	for (i=0;i<a;i++) {
		scanf ("%d", &N[i]);
	}

	//loop para ler o vetor M
	for (i=0;i<a;i++) {
		scanf ("%d", &M[i]);
	}

	//loop para calcular o produto escalar dos vetores
	for (i=0;i<a;i++) {
		P=P+(N[i]*M[i]);
	}

	printf ("%d", P);

	return 0;

}
