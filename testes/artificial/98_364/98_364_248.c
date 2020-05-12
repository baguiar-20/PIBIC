#include <stdio.h>
#include <stdlib.h>


int main(){

	int swlf, tcko, oohz, fkuz, ifyz, xfci[100];

	
	do{
		oohz = 0;			
				
		printf("Numeros: ");
		for(;(scanf("%d", &tcko)==1);){
			xfci[oohz] = tcko;
			oohz++;

		}
		getchar();

		if (oohz == 0) exit (0);
		
		swlf = 0;		
		for(fkuz = 0 ;fkuz< oohz-1;fkuz++){
			(xfci[fkuz]>xfci[fkuz+1])? (swlf=1) : swlf;
		}
				
		(swlf == 1)? printf("Desordenado.\n"):printf("Ordenado.\n");
		
	
	}while(1);


}
