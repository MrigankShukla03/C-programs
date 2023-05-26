#include<stdio.h>
int main()
{
    int unit;float bill;
    printf("Enter the units consumed:");
    scanf("%d",&unit);
    if(unit<=50)
        bill=unit*0.5;
    else if(unit>50&&unit<=150)
        bill=50*0.5+(unit-50)*0.75;
    else if(unit>150&&unit<=250)
        bill=50*0.5+100*0.75+(unit-150)*1.20;
    else
        bill=50*0.5+100*0.75+100*1.20+(unit-250)*1.50;
    
    printf("Total Amount is:%f Rs",bill);
}