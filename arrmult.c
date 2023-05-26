        #include<stdio.h> 
        int main()
        {  
        int a[10][10],b[10][10],mul[10][10],r1,c1,r2,c2,i,j,k;    
        printf("enter the number of row and columns of matrix A=");    
        scanf("%d %d",&r1,&c1);    
        printf("enter the number of rows and column of matrix B=");    
        scanf("%d %d",&r2,&c2);    
        printf("enter the first matrix element=\n");    
        for(i=0;i<r1;i++)    
        {    
        for(j=0;j<c1;j++)    
        {    
        scanf("%d",&a[i][j]);    
        }    
        }    
        printf("enter the second matrix element=\n");    
        for(i=0;i<r2;i++)    
            {    
        for(j=0;j<c2;j++)    
        {    
        scanf("%d",&b[i][j]);    
        }    
        }    
        if(c1!=r2)
        {
            printf("\nMultiplication can't be performed:");
        } 
        else{
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                {
                    mul[i][j]=0;
                    for(k=0;k<r2;k++)
                    {
                        mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
                    }
                }
            }
        }     
        for(i=0;i<r1;i++)    
        {    
        for(j=0;j<c2;j++)    
        {    
        printf("%d\t",mul[i][j]);    
        }    
        printf("\n");    
        }    
        return 0;  
        }  