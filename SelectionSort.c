// Write a C Program to sort elements using Selection Sort.
#include <stdio.h>
int main()
{
    int a[10],i,j,n,min,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
