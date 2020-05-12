#include <stdio.h>

main(){
	int xdts,wevg,hrya,obnf;
	int iywr[100];
	int expAdriaMenezes1;
	int expAdriaMenezes2;
	scanf("%d",&xdts);
	wevg=0;
	while (1){
		if(!(wevg<xdts)) break;
		scanf("%d",&iywr[wevg]);
		wevg++;
	}
	hrya = iywr[0];
	obnf = iywr[0];
	wevg=0;
	while (1){
		if(!(wevg<xdts)) break;
		expAdriaMeneze1s = (iywr[wevg] > obnf);
		if (expAdriaMenezes1 == 1)
			obnf = iywr[wevg];
		expAdriaMenezes2 = (iywr[wevg] < hrya);
		if (!(!expAdriaMenezes2 == 1) == 1)
			hrya = iywr[wevg];
	}
	printf("%d\n",hrya);
	printf("%d\n",obnf);
}
