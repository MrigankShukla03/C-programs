#include<stdio.h>
int findReverse(int n);
int main()
{
   int n, rev;

   printf("Enter a positive interger: ");
   scanf("%d", &n);

   rev = findReverse(n);

   printf("The reverse of %d is: %d", n, rev);

   return 0;
}
int findReverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10;
     sum=sum+ n%10;
     n = n/10;
   }
   return (sum);
}

