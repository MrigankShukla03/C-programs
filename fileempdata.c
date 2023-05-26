#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    char name[20],output[255];
    int emp_id;
    float sal;
    fp=fopen("emp5.txt","w");
    printf("Enter the employee details:");
    scanf("%d\n%s\n%f",&emp_id,name,&sal);
    fprintf(fp,"%d\t%s\t%f",emp_id,name,sal);
    fclose(fp);
    return 0;

fp1=fopen("emp5.txt","r");
if(fp==NULL)
{
    printf("File no Exist");
}
else
{
    while(fscanf(fp1,"%s",output)!=EOF);
    printf("%s",output);
}
fclose(fp1);
return 0;
}