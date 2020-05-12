
#include <stdio.h>
#include <math.h>

int main() {

	int ekqo, dqgo, lhed, qiem;
	int ryjo;
	int expAdriaMenezes;

	scanf ("%d", &ekqo);

	for (dqgo=2;dqgo<=ekqo/2;dqgo++) {
		ryjo = acha_primo (dqgo);
		expAdriaMenezes = (ryjo==1);
		if (!(!(expAdriaMenezes))) {
			lhed=2;
			while (1) {
				if (!(lhed<=ekqo/2)) break;
				qiem=pow(dqgo,lhed);
				if (qiem==ekqo) {
					dqgo=ekqo/2;
					lhed=ekqo/2;
					printf ("potencia prima");
				} 
				if (dqgo==ekqo/2 && lhed==ekqo/2 && qiem!=ekqo) {
					printf ("nao potencia prima");
				}
				lhed++;
			}
		}
			
	}

}

acha_primo (int yses) {
	//retorna 1 se o parametro for primo e 0 se nao for

	int dqgo, rezn;
	rezn=0;

	dqgo=2;
 	while (1) {
	 	if(!(dqgo<=yses)) break;
		if (yses%dqgo==0) {
			rezn++;
		}
		dqgo++;
	}

	if (!(rezn==2)) {
		return 0;
	} else {
		return 1;
	}
}
