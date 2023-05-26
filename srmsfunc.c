#include<stdio.h>
#include<stdlib.h>
int n;
float per;
struct student
{
       char name[30];
       int usn;
       char section[2];
       char uname[20];

}s1[5];

void search()
  {
       int usn1,i;
       printf("\nEnter Student's USN to be Searched : ");
       scanf("%d",&usn1);
       for(i=0;i<n;i++)
       {
            if(s1[i].usn==usn1)
            {
                 printf("\nName        : %s",s1[i].name);
                 printf("\nUSN     	   : %d",s1[i].usn);
                 printf("\nSection     : %s",s1[i].section);
               
            }
            else
            {
            	printf("\n Student record not exist");
			}
       }
  }
  
  void display()
  {
       int i;
       printf("\nList of All Students:\n");
       for(i=0;i<n;i++)
       {
            printf("%s\t  %d\t  %s\n",s1[i].name,s1[i].usn,s1[i].section);
       }
       printf("\n");
  }
  void insert()
  {
  	int i;
  	printf("\nHow Many Student's Record You Want to Add: ");
    scanf("\n %d",&n);
    for(i=0;i<n;i++)
    {
            printf("\n\tEnter Details of Student=%d",i+1);
            printf("\nName of the student : ");
            scanf("%s",s1[i].name);
            printf("\nUSN of the student   : ");
            scanf("%d",&s1[i].usn);
            printf("\nSection of the student: ");
            scanf("%s",s1[i].section);
            
  	}
    
}
void calcper()
    {
    int sub1,sub2,sub3,sub4,sub5,totalmarks;
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
    }
    void calcgrd()
    {
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
    }

int main()
  {
       int n,i,ch;
    printf("\n===============Welcome to Sudent Record Management System===============\n");

       while(ch!=6)
       {
            printf("\nMain Menu\n");
            printf("\n 1:ADD RECORD");
            printf("\n 2:SEARCH RECORD BY USN");
            printf("\n 3:TOTAL PRESENT RECORD");
            printf("\n 4:CALCULATE PERCENTAGE");
            printf("\n 5:CALCULATE GRADE");
            printf("\n 6:EXIT");
            printf("\nEnter Your Choice : ");
            scanf("\n%d",&ch);
            switch(ch)
            {
                 case 1: 
				 			insert();
                 		 	break;
                 case 2: 
				 			search();
                 			break;
                 case 3: 
				 			display();
                 			break;

                 case 4:    calcper();
                            break;

                 case 5:     calcgrd();
                             break;
                 case 6: 	
				 			exit(0);
                 			break;
                default:
                			printf("You Entered Wrong Choice!!");
                            break;
            }
       }
        printf("\n====================Thanks for Using Our Student Record Management System====================");
        return 0;
  }