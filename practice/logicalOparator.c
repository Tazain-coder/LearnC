/*
* Logical Oparator
*/

#include <stdio.h>

int main() 
{

  // a simple variable setup for Logical Oparators
  int a;
  int b;

  // NOTE: There are 3 basic Logical Oparators 1. && (Logical AND) 2. || (Logical OR) 3. ! (Logical NOT)
  

  // * Logical AND 
  // NOTE: If all the input values are true or 1 then the output is 1
  // * For C any value more than 0 is mostly considered a true value

  a = 0; b = 0;
  printf("value1 = %d , value2 = %d AND output: %d\n",a,b, a && b); // OUT: 0  

  a = 5; b = 0;
  printf("value1 = %d , value2 = %d AND output: %d\n",a,b, a && b); // OUT: 0  

  a = 0; b = 5;
  printf("value1 = %d , value2 = %d AND output: %d\n",a,b, a && b); // OUT: 0  

  a = 2; b = 1;
  printf("value1 = %d , value2 = %d AND output: %d\n",a,b, a && b); // OUT: 0  


  printf("\n");
  
  // * Logical OR 
  // NOTE: If any of the input values are true or 1 then the output is 1
  // * For C any value more than 0 is mostly considered a true value

  a = 0; b = 0;
  printf("value1 = %d , value2 = %d AND output: %d\n",a,b, a || b); // OUT: 0

  a = 5; b = 0;
  printf("value1 = %d , value2 = %d AND output: %d\n",a,b, a || b); // OUT: 1

  a = 0; b = 5;
  printf("value1 = %d , value2 = %d AND output: %d\n",a,b, a || b); // OUT: 1

  a = 2; b = 1;
  printf("value1 = %d , value2 = %d AND output: %d\n",a,b, a || b); // OUT: 1  

  printf("\n");

  // Logical NOT
  // NOTE: It inverts the given input . if input is true the output is false and vise versa;
  // * For C any value more than 0 is mostly considered a true value

  a = 5;
  printf("input1: %d NOT output: %d\n", !a); // OUT: 0 NOTE: 5 is considered a true value so when using in a logical sense it is treated as a 1

  a = 0;
  printf("input1: %d NOT output: %d\n", !a); // OUT: 1 


  // TODO: Try to work out the output of following logical oparations
  // 1. a && !b
  // 2. a || (b && c)
  // 3. !a && (b || c && !a)
  // PS: Try to have fun with it and find more things to try
  
}
