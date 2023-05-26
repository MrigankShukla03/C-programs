#include <stdio.h>
struct student {
    char name[20];
    int roll,total;
    int m1,m2,m3;
}s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s",s.name);

    printf("Enter USN number: ");
    scanf("%d", &s.roll);
    printf("Enter mark of 1st Subject: ");
    scanf("%d", &s.m1);
    printf("Enter mark of 2st Subject: ");
    scanf("%d", &s.m2);
    printf("Enter mark of 3st Subject: ");
    scanf("%d", &s.m3);
    s.total=s.m1+s.m2+s.m3;
    float per=(s.total*100)/300;
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("\nUSN number: %d\n", s.roll);
    printf("Marks: %d %d %d\n", s.m1,s.m2,s.m3);
    printf("Total Marks are:%d\n",s.total);
    printf("Percentage is %f",per);
    if(per<=40)
    {
        printf("\nGrade is Fail");
    }
    else if(per>40 && per<=50)
    {
        printf("\nGrade is D");
    }
    else if(per>50 && per<=60)
    {
        printf("\nGrade is C");
    }
    else if(per>60 && per<=70)
    {
        printf("\nGrade is B");
    }
    else if(per>70 && per<=80)
    {
        printf("\nGrade is A");
    }
    else
    {
        printf("\nGrade is A+");
    }

    return 0;
}
    