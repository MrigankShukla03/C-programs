// Write a C program to search an element in an array.
#include <stdio.h>
int main()
{
    int i, n, search, array[100];
    printf("Enter number of elements in array ");
    scanf("%d", &n);
    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Enter a number to search ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (array[i] == search) 
        {
            printf("%d is present at location %d.", search, i+1);
            break;
        }
    }
    if (i == n)
        printf("%d isn't present in the array.", search);
    return 0;
}


