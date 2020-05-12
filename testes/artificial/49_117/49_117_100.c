//Um inteiro positivo x é dito uma potência prima se existem dois inteiros positivos p e k, com p primo, 
//tais que x = p^k (p elevado a k). Escreva um programa que receba um inteiro e imprima "potencia 
//prima" caso o número seja uma potência prima. Caso contrário, imprima "nao potencia prima". 

#include <stdio.h>
#include <math.h>

int main() {

	int num, i, j, potencia;
	int resp;

	scanf ("%d", &num);

	for (i=2;i<=num/2;i++) {
		resp = acha_primo (i);
		if (resp==1) {
			for (j=2;j<=num/2;j++) {
				potencia=pow(i,j);
				if (potencia==num) {
					i=num/2;
					j=num/2;
					printf ("potencia prima");
				} 
				if (i==num/2 && j==num/2 && potencia!=num) {
					printf ("nao potencia prima");
				}
			}
		}
			
	}

}

acha_primo (int a) {
	//retorna 1 se o parametro for primo e 0 se nao for

	int i, cont;
	cont=0;

	for (i=1;i<=a;i++) {
		if (a%i==0) {
			cont++;
		}
	}

	if (cont==2) {
		return 1;
	} else {
		return 0;
	}
}
