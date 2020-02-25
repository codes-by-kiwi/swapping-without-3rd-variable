//swapping the values of 2 variables without using an extra variable 


#include <stdio.h>
  
int main() 
{ 
   int a = 20; 
   int b = 80; 
  
   a = a + b; // a = 20+80=100
   b = a - b; // b = 100-80=20
   a = a - b;  // a = 100-20=80
  // the new value of b is 20 and the new value of a is 80
   printf("A : %d\n ",a); 
   printf("B : %d\n ",b);
    /* in c whatever is before the = sign, their previous value is ignored and
    the value after the = sign is assigned to it. 
    */
   return 0; 
} 