// Write a C Program to Search an elements using Linear Search and Recursive Function.


#include <stdio.h>

int linearSearch(int [],int,int);

int main()
{
    int a[10],i,n,ele,f;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&ele);
    f=linearSearch(a,ele,n-1);
    if(f==-1)
        printf("Element Not Found");
    else
        printf("Element Found");

    return 0;
}

int linearSearch(int a[], int ele, int n)
{
    if (n < 0)
        return -1;
    else if (ele==a[n])
        return n;
    else
    return linearSearch(a,ele,n - 1);
}

