// Write a C Program to sort elements using Quick Sort
#include <stdio.h>
void QuickSort(int [],int,int);
int Partition(int [],int,int);
int main()
{
    int a[10],i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    QuickSort(a,0,n-1);
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
void QuickSort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=Partition(a,lb,ub);
        QuickSort(a,lb,loc-1);
        QuickSort(a,loc+1,ub);
    }
}
int Partition(int a[],int lb,int ub)
{
    int pivot=a[lb],start=lb,end=ub,temp;
    while(start<end)
    {
        while(a[start]<=pivot)
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}
