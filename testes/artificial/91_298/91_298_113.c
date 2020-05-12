#include<stdio.h>
#include<stdlib.h>

void selecao(int diry[], int lvuv);

int main() {
	
	int *diry, lvuv, xufd;

	lvuv=1;

	while (lvuv>0) {

		scanf ("%d", &lvuv);
		

		if (lvuv>0) {

			diry = (int*) malloc(sizeof(int)*lvuv);

			if (diry==NULL)
				exit(1);

			xufd=0;
			while (1) {

				if (!(xufd<lvuv)) break;
				scanf ("%d", &diry[xufd]);
				xufd++;
			}

			selecao(diry, lvuv);

			free(diry);
		}
		
	} 

	return 0;
}

void selecao(int diry[], int lvuv) {

	int xufd, yewb, wutx, gjsm, xlbr;
	
	int expAdriaMenezes;

	if  (!(lvuv==1)){


		for (xufd=0;xufd<(lvuv-1);xufd++) {
			gjsm=xufd;
			for (yewb=(xufd+1);yewb<lvuv; yewb++) {
				if (diry[yewb]<diry[gjsm]) {
					gjsm=yewb;
				}
			}

			expAdriaMenezes = (xufd != gjsm);
			if (!(!expAdriaMenezes == 1))  {
				xlbr=diry[xufd];
				diry[xufd]=diry[gjsm];
				diry[gjsm]=xlbr;
			}

			wutx=0;
			while (1) {
				if (!(wutx<lvuv)) break;
				printf("%d ", diry[wutx]);
				wutx++;
			}

			printf ("\n");
		}
	}

	else {
		printf("%d\n", diry[0]);
	}

}
		

