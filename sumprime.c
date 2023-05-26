#include <stdio.h>

int main()
{
    int i, j,n,prim, sum=0;
    printf("Find sum of all prime between 1 to : ");
    scanf("%d", &n);
    for(i=2; i<=n; i++)
    {
        prim = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                prim = 0;
                break;
            }
        }
        if(prim==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d",n, sum);

    return 0;
}