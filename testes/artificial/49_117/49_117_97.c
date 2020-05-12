/*
Um inteiro positivo x é dito uma potência prima se existem dois inteiros positivos p e k,
com p primo, tais que x = p^k (p elevado a k). Escreva um programa que receba um inteiro e
imprima "potencia prima" caso o número seja uma potência prima. Caso contrário, imprima
"nao potencia prima".

Dicas:
Verifique que "potencia prima" e "nao potencia prima" se escreve sem til e sem acentos.
*/
#include<stdio.h>
#include<math.h>

int funcPrimo(int a)
{
    int  i,  vezes = 0, valor;
    for (i = 1; i <= a && vezes <= 3; i++)

    {    if (a % i == 0)
        vezes ++;
    }

    if (vezes == 2)
    {
     valor = 1;
    }
    else
    {
     valor = 0;
    }

    return valor;
}


int main ()
{
     int n, p, k, pot, flag=0;

     scanf("%d", &n);

     for(p=2; p<n/2; p++)
     {

               for (k=2;k<n/2;k++)
               {
                    if(funcPrimo(k))
                    {    pot= pow(p,k);
                         if(pot == n) flag=1;
                    }
               }



     }

     if(flag) printf("potencia prima");
     else printf("nao potencia prima");




}




