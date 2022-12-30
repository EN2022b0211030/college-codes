#include <stdio.h>

int main() {
    char opt;  
    int n1, n2;   
    float res;  
    printf (" Choose an operator(+, -, *, /) \n ");  
    scanf ("%c", &opt);
     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1); 
    printf (" Enter the second number: ");  
    scanf (" %d", &n2);  
      
     
    if (opt == '+')  
       { res = n1 + n2;
        printf (" %.2f", res);  
       } 
          
    else if (opt == '-')  
        { res = n1 - n2; 
            printf (" %.2f", res);  
         }
    else if (opt == '*')
            { res = n1 * n2; 
            printf (" %.2f", res);  
            }          
          
    if (opt == '/' )   
        {    if (n2 == 0)  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            res = n1 / n2; 
            printf (" %.2f", res);  
        }    
    }  
