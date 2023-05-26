#include <stdio.h>
int main ()
{
           int a;
           int f;
           printf ("\n Enter a Number : ");
           scanf ("%d",&a);
           f=fact(a);
           printf ("\n The Factorial of %d is : %d",a,f);
           return 0;
}
    int fact(int n)
 {
     int i=1;
     int f=1;
     while (i<=n)
     {
        f=f*i;
        i++;
     }
    return(f);
}