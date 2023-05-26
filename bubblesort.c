#include <stdio.h> 
int main()
{
int a[10], n, i, j, temp;
printf("Enter the size of an array:\n"); 
scanf("%d", &n); 
printf("Enter the elements of an array:\n"); 
for (i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
printf("Array elements before Bubble sort: ");

for (i=0; i<n;i++)
{
    printf("%d \n",a[i]);
}
for (i=0; i<n-1; i++)
{
for (j=0; j<n-i-1; j++)
{
    if(a[j]>a[j+1])
    {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1]=temp;
    }
}
}
printf(" Array Elements after the bubble sort: ");

for (i=0; i<n; i++)
{
printf("%d", a[i]);
}
return 0;
}