#include <stdio.h>
int main() {
int N[10], M[10], i, P=0;
for (i=0;i<10; i++)
scanf("%d", &N[i]);
for (i=0;i<10; i++)
scanf("%d", &M[i]);
for (i=0;i<10; i++)
P += N[i]*M[i];
printf("%d",P);
}

