#include<stdio.h>

int main()
{
    int n,i = 3, count, c;

    printf("\nEnter the number:  ");
    scanf("%d", &n);

    if(n >= 1)
    {
        printf("\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }
    for(count = 2; count <= n; i++)  
    {
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)
        {
            printf("%d ", i);
            count++;
        }

    }
    return 0;
}