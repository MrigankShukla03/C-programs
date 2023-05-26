#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("===============Welcome to Sudent Record Management System===============\n");
    
    char name[20];
    char class[10];
    char sec[5];
    char specialization[20]; 
    char uname[20];
    
    int rollno,choice;
    
    int sub1,sub2,sub3,sub4,sub5,totalmarks;
    float per;
    
    do 
    {
        printf("\n---------MAIN MENU-----------\n");
        printf("\n1.ADD RECORD \n2.CALCULATE PERCENTAGE \n3.CALCULATE GRADE \n4.EXIT\n");
        printf("Enter Your Choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter your Name: ");
            scanf("%s",name);
            printf("Enter your Class: ");
            scanf("%s",class);
            printf("\nEnter your Section: ");
            scanf("%s",sec);
            printf("\nEnter your Specialization: ");
            scanf("%s",specialization);
            printf("Enter your University Name: ");
            scanf("%s",uname);
            printf("\nEnter your Roll.No: ");
            scanf("%d",&rollno);
    
            printf("RECORD ADDED \nName: %s\nClass: %s\nSection: %s\nSpecialization: %s\nUniversity Name: %s University\nRoll.No.: %d",name,class,sec,specialization,uname,rollno);
            break;

            case 2:
            printf("\nEnter your Mark For Subject 1: ");
            scanf("%d",&sub1);
            printf("\nEnter your Mark For Subject 2: ");
            scanf("%d",&sub2);
            printf("\nEnter your Mark For Subject 3: ");
            scanf("%d",&sub3);
            printf("\nEnter your Mark For Subject 4: ");
            scanf("%d",&sub4);
            printf("\nEnter your Mark For Subject 5: ");
            scanf("%d",&sub5);
            printf("\nEnter your Total Number of Marks Out of which you Have scored by adding for all the 5 subjects: ");
   
            scanf("%d",&totalmarks);
    
            per=(sub1+sub2+sub3+sub4+sub5)*100/totalmarks;

            printf("\nTotal Percentage is %f",per);
            
            break;
            
            case 3:
            

            if(per>=0&&per<=49)
            {
                printf("\nPercentage is %f Grade is Fail and D",per);
            }
            else if(per>=50&&per<=60)
            {
                printf("\nPercentage is %f Grade is Pass and C",per);
            }
            else if(per>=61&&per<=70)
            {
                printf("\nPercentage is %f Grade is Second Class and B",per);
            }
            else if(per>=71&&per<=80)
            {
                printf("\nPercentage is %f Grade is First Class and A",per);
            }
            else 
            {
                printf("\nPercentage is %f Grade is Distinction and A+",per);
            }
            break;
            
            case 4: 
            exit(0);
            break;

            default:
            printf("\nYou Entered Wrong Choice");
            break;
        }
    }while(choice!=4);
    printf("\n====================Thanks for Using Our Student Record Management System====================");
    
    return 0;
}