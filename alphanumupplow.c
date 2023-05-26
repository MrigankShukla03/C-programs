#include<stdio.h>
#include<string.h>
        
int main()
{
    char c[10];
    printf("Enter the string:\n");
    gets(c);

    printf("No. of Alphanumeric characters in string are: %d\n",isalnum(c));
    printf("No. of Alphabets in string are: %d\n",isalpha(c));
    printf("No. of Digits in string are: %d\n",isdigit(c));
    printf("No. of Uppercase characters in string are: %d\n",islower(c));
    printf("No. of Lowercase characters in string are: %d\n",isupper(c));
    
    return 0;
}