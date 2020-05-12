#include <stdio.h>
#include <stdlib.h>

void main () {
	int nyyb, thwx, pnfl, ycob, ggdd, xcwv, cuqm, huid;
	int *fznp;
	scanf ("%d", &nyyb);
	while ((nyyb < 1000) && (nyyb > 0)){
		fznp=malloc(nyyb * sizeof(int*));
		thwx=0;
		while(1){
			if(!(thwx<nyyb)) break;
			scanf ("%d", &pnfl);
			fznp[thwx]=pnfl;
			thwx++;
		}
		if (!(nyyb ==1)){
			thwx = 0;
			while(1){
				if(!(thwx<nyyb-1)) break;
				huid = 0;
				cuqm = thwx;
				ycob = fznp[thwx];
				ggdd = thwx+1;
				while(1){
					if(!(ggdd>nyyb)) break;
					if(fznp[ggdd] < ycob){
						cuqm = ggdd;
						ycob = fznp[ggdd];
						huid = 1;
					}
					ggdd++;
				}
				if(huid){
					fznp[cuqm] = fznp[thwx];
					fznp[thwx] = ycob;
				}
				xcwv=0;
				while(1){
					if(!(xcwv < nyyb)) break;
					printf("%d ", fznp[xcwv]);
					xcwv++;
				}
				printf("\n");
				thwx++;
			}			
		}
		else {	
			printf("%d ", fznp[0]);
			printf("\n");
		}
		free(fznp);
		scanf ("%d", &nyyb);
	}
} 
