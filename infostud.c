#include<stdio.h>
struct student
{
       char name[30];
       int rollno;
       int age;
       char address[30];
}s1[10];

//main function
int main()
  {
       	int i;
	//store 10 student records
	printf("\nEnter the 10 student records: ");
    	for(i=0;i<10;i++)
    	{
            	printf("\n\tEnter Details of Student=%d",i+1);
            	printf("\nName of the student : ");
           	scanf("%s",s1[i].name);
            	printf("\nRollno of the student   : ");
            	scanf("%d",&s1[i].rollno);
            	printf("\nAge of the student   : ");
            	scanf("%d",&s1[i].age);
            	printf("\nAddress of the student: ");
            	scanf("%s",s1[i].address);
	}
	//Display student data
	printf("\nList of All Students:\n");
       	for(i=0;i<10;i++)
      	 {
          		  printf("%s\t  %d\t  %d\t   %s\n", s1[i].name, s1[i].rollno, s1[i].age,s1[i].address);
       	}
       	printf("\n");
   return 0;
  }
  //Write a function to print the names of all the students having age 14.
void display_age()
  {
       int i;
       for(i=0;i<10;i++)
       {
            if(s1[i].age>=14)
		printf("%s\t ",s1[i].name);
       }
       
  }
  //Write another function to print the names of all the students having even roll no.
void display_rollnoeven()
  {
       int i;
       for(i=0;i<10;i++)
       {
            if((s1[i].rollno%2)==0)
		printf("%s\t ",s1[i].name);
       }
       
  }

//c. Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
void display_rollno()
  {
       int i,r;
       printf("\nEnter Student's rollno to be searched : ");
       scanf("%d",&r);
       for(i=0;i<10;i++)
       {
            if(s1[i].rollno==r)
            {
                 printf("\nName        : %s",s1[i].name);
                 printf("\nRollno       : %d",s1[i].rollno);
	     printf("\nAge            : %d",s1[i].age);
                 printf("\nAddress    : %s",s1[i].address);
              }
       }
   
  }
