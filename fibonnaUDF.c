#include<stdio.h>
int main() 
{
   int n,f;    
   printf("Enter a number to generate fibonacci series for first n terms\n");
   scanf("%d",&n);
   f=fibo(n);

    return 0;
}

int fibo(int n)
{
   int i,c=0;
   int a=0;
   int b=1;
   
   for(i=0;i<n;i++)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }
   return 0;
}