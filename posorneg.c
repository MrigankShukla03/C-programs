#include <stdio.h>
int main()
{
    int a[100];
    int i, n, posco=0,negco=0;
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<n; i++)
    {
        if(n>0)
        {
            printf("Positives no. are:%d",posco++);
        }
        else
        {
            printf("\nNegative no. are:%d",negco++);
        }
    }
    
    
    return 0;
}