#include <stdio.h>


	int main () {

		int  primo, x, m, result, resultI, i, j, mult;

		scanf ("%d", &x);

		for (i=1; i<=x; i++) {
			for (j=1; j<=x; j++) {

					if (potenci(i,j) ==x) {
						if (i>1 & j>1) {				

						result=prim (i); 
						resultI=prim (j);
							}
						}
					}
				}


				if (result==1 & resultI==1) {

				printf ("potencia prima\n");
				}
			
		else {
				printf ("nao potencia prima\n");
			}

		return 0;
}			


	int prim (int k){

	int i, j, cont;

	cont=0;
	
		for (i=1; i<=k; i++) {

			if (k%i==0) {

				cont=cont+1;

					}
				}
		
		if (cont == 2){
		 return 1;
			}

		else { 
			return 0;		
				}
}

	int potenci (int base, int expoente) {

				int i, poten;


			poten=1;
		for (i=1; i<=expoente; i++) {

			poten=poten*base;
			}

		return poten;
	}
