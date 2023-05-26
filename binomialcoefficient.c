// Write a c program to find binomial coefficient using recursion.
#include<stdio.h>
int fact (int);
int main()
{
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d%d",&n,&r);
    printf("The value of binomial coefficient is %d",fact(n)/(fact(r)*fact(n-r)));
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}