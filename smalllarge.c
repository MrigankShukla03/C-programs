#include <stdio.h>
int main()
{
	int a[10],n,i;
    int large,small;
	printf("Enter the size of the array: \n ");
	scanf("%d",&n);
	printf("Enter the elements of the array: \n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=small=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
		if (a[i]>large)
		{
			large=a[i];
		}
	}
	printf("\n largest: %d,Smallest: %d",large,small);	
	
	return 0;		
}
