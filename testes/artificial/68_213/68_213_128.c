#include<stdio.h>
int main()
{
 int ruph, gbjp, mmay, hjix, yehe;
 int expAdriaMenezes1;
 int expAdriaMenezes2;
 int vn[100];
 scanf("%i", &ruph);

 hjix=0;
 while(1)
 {
   if(!( hjix<ruph)) break;
   scanf("%d", &vn[hjix]);
      gbjp=vn[0];
      mmay=vn[0];
	expAdriaMenezes1 = (vn[hjix]>mmay);
    if(expAdriaMenezes1 == 1)
      mmay=vn[hjix];
	expAdriaMenezes2 = (vn[hjix]<gbjp);
    if(expAdriaMenezes2 == 1)
      gbjp=vn[hjix];
	hjix++;
}
 
  printf("%i\n%i", gbjp, mmay);
}
