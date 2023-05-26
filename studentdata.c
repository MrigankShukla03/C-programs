#include<stdio.h>
struct student
{
    int USN;
    char name[20];
    float marks;
};
int main()
{
    struct student s[2];
    int i;
    for(i=0;i<2;i++)
    {
        s[i].USN=i+1;
        printf("Enter name:");
        scanf("%s",&s[i].name);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
    }
    printf("\nDetails of the student:");
    for(i=0;i<2;i++)
    {
        printf("\nStudent %d",i+1);
        printf("\n%d\t%s\t%f\t",s[i].USN,s[i].name,s[i].marks);
    }
    return 0;
}