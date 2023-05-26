// Write a C Program to sort elements using Merge Sort.
#include <stdio.h>

void Mergesort(int [], int, int);
void Merge(int [], int,int,int);

int main()
{

int a[20], i,n;

printf("Enter the size of array: ");
 scanf("%d", &n);
printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
Mergesort(a,0, n-1);
printf("Sorted elements are: ");
    for(i=0;i<n;i++)
    printf("%d\t", a[i]);
return 0;
}
void Mergesort (int a[], int low, int high)
{
    int mid; 
    if(low != high)
{
        mid = (low + high) / 2;
        Mergesort(a, low, mid);
        Mergesort(a, mid +1, high);
        Merge(a, low, mid, high);
}
}
void Merge(int a[], int low, int mid, int high)
{
    int i, j, k, c[20];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(a[i] < a[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=high)
        {
            c[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=low;k<=high;k++)
    a[k]=c[k];
}
