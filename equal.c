#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    int *p1;
    p1=&a;
    p=&a;
    printf("\n%d",a);
    printf("\n%u",&a);
    printf("\n%u",p);
    printf("\n%u",&p);
    printf("\n%d",*(&a));
    printf("\n%d",*p);
    printf("\n%u\t%u",p++,p--);
    if(p==p1)
    {
    printf("\nEqual");

    }
    else{
    printf("\nNot Equal");

    }
    return 0;
}