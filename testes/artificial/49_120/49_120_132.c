#include<stdio.h>
int main(){
int n[10];
int m[10];
int p = 0;
int i;

for (i=0;i<10;i++)
{

scanf ("%i",&n[i]);
scanf ("%i",&m[i]);

}

for (i=0;i<10;i++)

{

p=p+(n[i]*m[i]);

}
printf ("%i",p);


}




