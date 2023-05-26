
#include <stdio.h>


int main()

{
    int n;

    FILE *fptr,*fp;

    char name[20];

    int usn;

    float marks;

    fptr = fopen("stu.txt", "w");
    printf("How many students data you want to enter \n");
    scanf("%d"&n);
    for(int i=0;i<n;i++)
    {
    printf("Enter the name \n");

    scanf("%s", name);

    printf("Enter the USN\n");

    scanf("%d", &usn);

    printf("Enter the Marks\n");

    scanf("%f", &marks);
    }
    fclose(fptr);

    
fp = fopen("stu.txt", "r");
if (fptr == NULL)

    {

        printf("File does not exists \n");

    }
    else{
      fprintf(fptr,  "Name    = %s\nMarks  = %f\nUSN     = %d\n",name,marks,usn);
    }
    fclose(fp);

    return 0;

}

    