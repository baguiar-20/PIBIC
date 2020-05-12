#include <stdio.h>

	int main () {

		int i, j, produto;
		int vetM[10], vetN[10];


		produto=0;


		for (i=0; i<10; i++) {

			scanf ("%d", &vetM[i]);
		}


		for (i=0; i<10; i++) {

			scanf ("%d", &vetN[i]);
		}

		
			
		for (i=0; i<10; i++) {

			produto=vetM[i]*vetN[i]+produto;

			}

		printf ("\n%d\n", produto);

}
