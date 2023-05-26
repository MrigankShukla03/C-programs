#include<stdio.h>
#include<stdlib.h>
int addition();  
int subtract();  
int multiply();  
int divide();   
  
int main()  
{    
    int choice;  
    do  
    {  

        printf (" Select an operation to perform the calculation in Simple Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Exit\n Please, Make a choice ");      
          
        scanf ("%d", &choice);
    switch (choice)  
    {  
        case 1:  
            addition(); 
            break; 
              
        case 2:  
            subtract();  
            break; 
              
        case 3:  
            multiply();
            break;
              
        case 4:  
            divide(); 
            break;
              
        case 5:  
            exit(0);
            break;
              
        default:  
            printf("\nInvalid choice!!!");  
            break;                        
    }
    } while (choice != 5);  
    return 0;        
} 
int addition()  
{  
    int n1, n2, add;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    add = n1 + n2;    
    printf (" Total Sum of the numbers = %d", add);  
    return 0;  
}
int subtract()  
{  
    int n1, n2, sub;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    sub = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, sub);  
}    
int multiply()  
{  
    int n1, n2, mul;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    mul = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, mul);  
}  
int divide()  
{  
    int n1, n2, div;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    div = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, div);  
}  