#include<stdio.h>
struct employee
    {
        int emp_id;
        char name[20];
        float sal;
        int w_hrs;
    }e1,e2;
int main()
{
    printf("\nEnter the employee Details");
    printf("\n1.\n");
    scanf("%d %s %f %d",&e1.emp_id,&e1.name,&e1.sal,&e1.w_hrs);
    printf("\n2.\n");
    scanf("%d %s %f %d",&e2.emp_id,&e2.name,&e2.sal,&e2.w_hrs);
    printf("\nEmployeed Details");
    printf("\n%d\t%s\t%f\t%d",e1.emp_id,e1.name,e1.sal,e1.w_hrs);
    printf("\n%d\t%s\t%f\t%d",e2.emp_id,e2.name,e2.sal,e2.w_hrs);

    return 0;
}