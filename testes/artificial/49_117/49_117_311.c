#include<stdio.h>
#include<math.h>

int main()
{
    int numero, i, j;

    scanf("%d", &numero);

    for(i=2; i<=numero; i++)
    {
        if(i==numero)
        {
            printf("potencia nao prima");
            return 0;
        }
        if(primo(i))
        {
            for(j=2;  pow(i,j)<= numero ; j++)
            {
                if(pow(i,j)==numero)
                {
                    printf("potencia prima");
                    return 0;
                }
            }
        }

    }

}
int primo(int i)
{
    int j, cont;
    cont=0;
    for(j=2 ; j<i ; j++)
    {
       if(i%j==0)
        {
            cont++;
        }
    }
    if(cont==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
