 #include<stdio.h>

int main(){

    int num,i,count=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = count+1;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",count);
    }
  
   return 0;
}