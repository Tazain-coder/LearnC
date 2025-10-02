/*
* Seelection sort
*/

#include <stdio.h>

int main() 
{
  // * Simple variable setup
  int i,j,temp;
  // * array with 5 things
  int x[5] = {8,3,1,6,2};

  // * First for loop for the first number to be compared 
  for(i=0; i<5; i++)
  {
    //* Second loop to compare the elements
    for(j=i+1; j<5; j++)
    {
      //* Compare 2 values to find the larger on
      if (x[i]>x[j])
      {
        //* if larger put the value of x[i] in temp
        temp = x[i];
        //* replace the value of x[i] with x[j]
        x[i] = x[j];
        //* set the value of x[j] to temp
        x[j] = temp;

        // The upper operations switch the value around to sort
      }
    }
  }
  // Print out the sorted array
    for(i=0; i<5; i++)
      printf("%d ",x[i]);
  return 0;
}
