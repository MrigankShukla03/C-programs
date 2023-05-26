// Write a C  Menu Driven Program to perform the factorial,fibonacci series,GCD,Binomial Coefficient and Sum of n Natural Numbers using recursion.
#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>
int facto(int);
int fibo(int);
int gcd(int,int);
int binomial(int,int);
int sum(int);
int main()
{
    int n,r,m,ch;
    printf("Enter the First Number:");
    scanf("%d",&n);
    printf("Enter the Second Number:");
    scanf("%d",&m);
    do{
         printf("\n 1.Factorial \n 2.Fibonacci Series \n 3.GCD \n 4.Binomial Coefficient \n 5.Sum of n Natural Numbers \n 6.Exit \n Enter your choice:\n");
         scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("The factorial of %d is %d",n,facto(n));
            break;
        case 2:
            printf("The fibonacci series is:");
            for(int i=0;i<n;i++)
            {
                printf("%d",fibo(i));
            }
            break;
        case 3:
            printf("The GCD of %d and %d is %d",n,m,gcd(n,m));
            break;
        case 4:
            printf("Enter the value of r:");  
            scanf("%d",&r);
            printf("The binomial coefficient of %d and %d is %d",n,r,binomial(n,r));
            break;
        case 5:
            printf("The sum of %d natural numbers is %d",n,sum(n));
            break;
        case 6:
            printf("Thank You!!!\n");
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
    }
    }while(ch!=6);
    return 0;
}
int facto(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return (n*facto(n-1));
    }
}
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int gcd(int n,int m)
{
    if(m==0)
    {
        return n;
    }
    else
    {
        return gcd(m,n%m);
    }
}
int sum(int n)
{
	if(n==0)
		return 0;
	else
		return (n+sum(n-1));
}
int binomial(int n,int r)
{
    if(n==r||r==0)
    {
        return 1;
    }
    else
    {
        return binomial(n-1,r-1)+binomial(n-1,r);
    }
}
