#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>
int main()
{
    int ch,a[10],i,n,loc,ele,pos;
    do  
    {  
        printf ("\n Select an operation to perform Insertion and Deletion: \n");  
        printf (" 1. Insertion  \n 2. Deletion \n 3. Exit\n Please, Make a choice \n");      
        scanf ("%d", &ch);
    switch (ch)  
    {  
        case 1:  
            printf("Enter the number of elements: ");
            scanf("%d",&n);
            printf("Enter the array elements: ");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            
            printf("Enter the element to be Inserted: ");
            scanf("%d",&ele);
            printf("Enter the position to be Inserted: ");
            scanf("%d",&pos);
            for(i=n;i>pos-1;i--)
            {
                a[i]=a[i-1];
            }
            
            a[pos-1]=ele;
            printf("The array elements after insertion: ");
            for(i=0;i<=n;i++)
            {
                printf("%d\t",a[i]);
            }
            

            break; 
              
        case 2:  
            printf("Enter the number of elements: ");
            scanf("%d",&n);
            printf("Enter the array elements: ");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            
            printf("Enter the position to be Deleted: ");
            scanf("%d",&pos);
            for(i=pos-1;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
            n--;
            printf("The array elements after Deletion: ");
            for(i=0;i<n;i++)
            {
                printf("%d\t",a[i]);
            }
            break; 

        case 3:  
            exit(0);
            break;
              
        default:  
            printf("\nInvalid choice!!!\n");  
            break;                        
    }
    } while (ch != 3);
    return 0;       
}