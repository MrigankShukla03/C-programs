// Write a C program to sort elements using selection sort.
#include<stdio.h>
int main()
{
int a[10],n,i,j,temp,min;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(a[min]>a[j])
                    min=j;
            
            }
                    temp=a[i];
                    a[i]=a[min];
                    a[min]=temp;
                }
                printf("The sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
            }

