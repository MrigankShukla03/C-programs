// Write a C program to sort elements using Insertion Sort.
#include<stdio.h>
int main()
{
int a[10],n,i,j,temp;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(i=1;i<n;i++)
        {
            temp=a[i];
            j=i-1;
            for(j=i;j>0 && temp<a[j-1];j--)
            {
                a[j]=a[j-1];
            }
            a[j]=temp;
        }
        printf("The sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

