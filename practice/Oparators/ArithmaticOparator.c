/*
* Arithmetic oparators
*
*/

#include <stdio.h>

int main() 
{
  int a,b,c,d;

  a = 10;
  b = 20;
  c = 60;

  // This adds the value of a and b and puts output in d
  d=a+b;
  printf("Sum = %d \n",d);
 
  // This substracts the value of b from a and puts output in d
  d=a-b;
  printf("Sub = %d \n",d);

  // This Multiflies the value of a and b and puts output in d
  d=a*b;
  printf("Mul = %d \n",d);
  
  // This finds the Divition value from a and b
  // NOTE: since d is declared as a integer the floating points will not be shown
  d=a/b;
  printf("Div = %d \n",d);

  // NOTE: we can type cast d to be a float for the floating point value
  printf("Div = %f \n",d);



  // This Finds the remainder from a devided by b
  d=a%b;
  printf("Remainder = %d \n",d);

  /* TODO: ==============================================================================
    * Increment and Decrement
    * Increment 2 types : 1) Pre-increment [eg. ++a], 2) Post-increment [eg. a++]
    * Decrement 2 types : 1) Pre-Decrement [eg. --a], 2) Post-Decrement [eg. a--]
  =================================================================================*/ 

  // A simple variable setup for Increment and Decrement
  // NOTE: we are using a separate variable to isolate the main 'm' variable
  // * so it is not used when we are printing the output 

  int m = 10;
  int y;
  
  // PRE-INCREMENT
  // NOTE: Pre Increment adds  1 to the value on the same line the oparation is done 
  // NOTE: it does not wait for the variable to be used again

  y = ++m;  // The value is already changed in this line
  printf("Pre Increment Value: %d\n",y); 
 
  // NOTE: Post Increment adds 1 to the value on the same line the oparation is done 
  // NOTE: it does require the variable to be called again

  m = 10; // resetting the value

  y = m++; // The value is not changed at this moment
  printf("Post Increment value: %d\n",y);
 
  // NOTE: Pre decrement adds  1 to the value on the same line the oparation is done 
  // NOTE: it does not wait for the variable to be used again

  m = 10; // resetting the value

  y = --m;
  printf("Pre Decrement value: %d\n",y);
 
  // NOTE: Post decrement adds  1 to the value on the same line the oparation is done 
  // NOTE: it does require the variable to be used again

  m = 10; // resetting the value

  y = m--;
  printf("Post Decrement value: %d\n",y);
  
}
