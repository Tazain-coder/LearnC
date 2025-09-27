/*
* Finding the sum of a series
*/
#include <stdio.h>


int main() {
  
  // declare a integer type variable
  // NOTE: Everything in 'C' is a number

  int i;

  printf("A-Z value\n");
  // loop though 'A' to 'Z'
  // NOTE: they can be looped because they have a numerical value
  for (i = 'A'; i <= 'Z'; i++) 
  {
    // Prints the Alphabet and the ASCII value (ex: A = 97)
    printf("%c = %d\n", i, i);
  }

  // same as before just for lowercase letters
  printf("a-z value\n");
  for (i = 'a'; i <= 'z'; i++) 
  {
    printf("%c = %d\n", i, i);
  }
}
