// Write a C program to find GCD of two numbers using recursion.
#include<stdio.h>
// #include<conio.h>
int gcd(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}