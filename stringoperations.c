#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>

int length(char *);  
void Strcpy(char *,char *);  
void Strcat(char *,char *);  
void reverse(char *,char *);
void compare(char *,char *);
  
int main()  
{    
    int ch;  char str1[10],str2[10],desc[10];
    //clrscr();
    printf("Enter the String 1: ");
    scanf("%s",str1);
    printf("Enter the String 2: ");
    scanf("%s",str2);
    do  
    {  
        printf (" Select an operation to perform String Operation: ");  
        printf (" \n 1. Length  \n 2. Copy  \n 3. Concatination \n 4. Reverse \n 5. Compare \n 6. Exit\n Please, Make a choice \n");      
        scanf ("%d", &ch);
    switch (ch)  
    {  
        case 1:  
            printf("The Length of the %s is: %d\n",str1,length(str1));
            break; 
              
        case 2:  
            Strcpy(desc,str1);
            printf("The Copied string is: %s\n",desc);  
            break; 
              
        case 3:  
            Strcat(str1,str2);
            printf("The Concatenated string is: %s\n",str1);
            break;
              
        case 4:  
            reverse(str1,desc);
            printf("The Reversed string is %s\n",desc); 
            break;
              
        case 5:  
            compare(str1,str2);
            break;
            
        case 6:  
            exit(0);
            break;
              
        default:  
            printf("\nInvalid choice!!!");  
            break;                        
    }
    } while (ch != 6);  
    return 0;        
} 
int length(char * str)  
{  
    int len=0;
    while(*str !='\0')
    {
        len++;
        str++;
    }
    return(len);
}
void Strcpy(char * desc,char * src)
{  

    while(*src !='\0')
    {
        *desc=*src;
        src++;
        desc++;
    }
    *desc='\0';
    // return(desc);
}
void Strcat(char * str1, char * str2)
{
    while(*str1 !='\0')
    {
        str1++;
    }
    while(*str2 !='\0')
    {
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
    // return(str1);
}
void reverse(char * de,char * src)
{
    int l=0,i;
    while(*de !='\0')
    {
        l++;
        de++;
        
    }
    de--;
    for(i=0;i<l;i++)
    {
        *src=*de;
        src++;
        de--;
        
    }
    *src='\0';
    // return(src);
}
void compare(char * str1,char * str2)
{
    int f=1;
    while(*str1 !='\0' && *str2 !='\0')
    {
        if(*str1==*str2)
        {
            f=1;
            break;
        }
        str1++;
        str2++;
    }
    if(f==0)
       printf("Both Strings Are Equal\n");
    else
        printf("Both Strings Are Not Equal\n");
}

// #include <stdio.h>
// // #include <conio.h>
// #include <stdlib.h>
// int length(char *s);
// void copy(char *s, char *s2);
// void concat(char *s, char *s2);
// void reverse(char *s, char *s2);
// void compare(char *s, char *s2);
// int main()
// {
//     char str1[10], str2[10], desc[10];
//     int ch;
//     printf("Enter the String 1: ");
//     scanf("%s",str1);
//     printf("Enter the String 2: ");
//     scanf("%s",str2);
//     do
//     {
//         printf("\n--------MENU DRIVEN--------");
//         printf("\n1.Length of a String\n2.COpying a String\n3.Concatenation of String\n4.Reversing a String\n5.Comparing a String\n6.Exit");
//         printf("\nEnter your choice: ");
//         scanf("%d",&ch);
//         switch (ch)
//         {
//         case 1:
//             printf("Length of the String %s is %d", str1, length(str1));
//             break;
//         case 2:
//             copy(desc, str1);
//             printf("The copied String is: %s", desc);
//             break;
//         case 3:
//             concat(str1, str2);
//             printf("The concatenated String is %s", str1);
//             break;
//         case 4:
//             reverse(str1,desc);
//             printf("The reversed String is %s", desc);
//             break;
//         case 5:
//             compare(str1, str2);
//             break;
//         case 6:
//             exit(0);
//             break;
//         default:
//             printf("Invalid Input");
//             break;
//         }
//     } while (ch <= 6);
//     return 0;
// }
// int length(char *s)
// {
//     int len = 0;
//     while (*s != '\0')
//     {
//         len++;
//         s++;
//     }
//     return (len);
// }
// void copy(char *s, char *s2)
// {
//     while (*s2 != '\0')
//     {
//         *s = *s2;
//         s++;
//         s2++;
//     }
//     *s='\0';
// }
// void concat(char *s, char *s2)
// {
    
//     while (*s != '\0')
//     {
//         s++;
//     }
//     while (*s2 != '\0')
//     {
//         *s = *s2;
//         s++;
//         s2++;
//     }
//     *s = '\0';
// }
// void reverse(char *s, char *s2)
// {
//     int c = 0;
//     while (*s != '\0')
//     {
//         c++;
//         s++;
        
//     }
//     s--;
//     for (int i = 0; i < c; i++)
//     {
//         *s2 = *s;
//         s2++;
//         s--;
        
//     }
//     *s = '\0';
// }
// void compare(char *s, char *s2)
// {
//     int f = 1;
//     while (*s != '\0' && *s2 != '\0')
//     {
//         if (*s != *s2)
//         {
//             f = 1;
//             break;
//         }
//         s++;
//         s2++;
//     }
//     if (f == 0)
//         printf("Two strings are equal.");
//     if (f == 1)
//         printf("Two strings are not equal.");
// }