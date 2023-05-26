#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    printf("Enter No. of Rows and Columns:\n");
    scanf("%d \n %d",&r,&c);
    printf("Enter Matrix elements: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r==c)
    {
        printf("It is a Square Matrix");
    }
    else
    {
         printf("It is Not a Square Matrix");
    }
    return 0;

}