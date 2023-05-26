#include<stdio.h>
long int multiplyNumbers(int n);
int sum=0;
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("\nSum of Factorial of %d = %ld", n, multiplyNumbers(n));	
    return 0;
}
long int multiplyNumbers(int n) 
{
	if (n>=1)
	{
		int f=1;
		for(int i=1;i<=n;i++)
		{
			f=f*i;
		}
		sum=sum+f;
		n*multiplyNumbers(n-1);
		return sum;
	}
	else
	{
	    return 1;
	}
}