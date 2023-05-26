#include<stdio.h>
int main()
{
    int m1,m2,m3,total;
    float avg;

    printf("Enter the Marks of Subject 1:");
    scanf("%d",&m1);
    printf("Enter the Marks of Subject 2:");
    scanf("%d",&m2);
    printf("Enter the Marks of Subject 3:");
    scanf("%d",&m3);
    if(m1<=35||m2<=35||m3<=35)
    {
        printf("Fail");
    }
    else
    {
        total=m1+m2+m3;
        avg=(total/300)*100;
        printf("Average is:%f",avg);
        if(avg>=90)
        {
            printf("Grade is A+");
        }
        else if(avg>=80&&avg<90)
        {
            printf("Grade is A");
        }
        else if(avg>=70&&avg<80)
        {
            printf("Grade is B");
        }
        else if(avg>=60&&avg<70)
        {
            printf("Grade is C");
        }
        else if(avg>=50&&avg<60)
        {
            printf("Grade is D");
        }
        else if(avg>=40&&avg<50)
        {
            printf("Grade is E");
        }

    }
}