#include<stdio.h>

float fact(float n);
void main()
{
int n;
float ser=0,i;
printf("\nEnter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
ser+=1/fact(i);
printf("\n Sum of series : 1");
for(i=2;i<=n;i++)
printf(" + 1/%.0f!",i);
printf(" = %.4f",ser);
return 0;
}
float fact(float n)
{
if (n>=1)
return n*fact(n-1);
else
return 1;
}