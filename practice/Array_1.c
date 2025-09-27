/*
* Logical Oparator
*/

#include <stdio.h>

int main() 
{
  // Intialize a iteger and a array
  int i,x[10];

  // Make a for loop that takes values to put in a array
  for (i=0;i<10;i++)
  {
    printf("enter a value -> ");
    scanf("%d", &x[i]);
  }

  // A for loop for outputting all the date
  // NOTE: Without the For loop the array outputs a garbage value

  for (i=0;i<10;i++)
  {
    printf("%d , ", x[i]);
  }
}
