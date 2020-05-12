#include <stdio.h>
#define n 10

main()
{ int a[n], b[n], p = 0, i;

  //printf ("\n Preencha o vetor de A: ");
  for (i = 0; i < n; i++)
  {
    //printf ("\n Posicao %d: ", i);
    scanf ("%d", &a[i]);
  }

  //printf ("\n Preencha o vetor de B: ");
  for (i = 0; i < n; i++)
  {
    //printf ("\n Posicao %d: ", i);
    scanf ("%d", &b[i]);
  }

  for (i = 0; i < n; i++)
  {
    p += (a[i]*b[i]);
  }
  
  printf ("\n %d \n", p);

}
