#include <stdio.h>
float fac(int n);
void main()
{
int lim;

  printf("Enter the limit for the sum of series: ");
  scanf("%d", &lim);
 printf("%f is the sum of the series\n",fac(lim));
}
float fac(int lim)
{
    int i,fact = 1;
    float sum = 0.0, term;
    for (i = 1; i <= lim; i++)
  {
    fact = fact*i;
    term = 1. / fact;
    sum = sum+term;
  }
   return(sum);
}
