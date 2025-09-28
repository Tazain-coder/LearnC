/*
* Inverting An array
*/

#include <stdio.h>

int main() 
{
  // NOTE: By not specifing the number of element in the array we make a dynamic 
  // array that scales based on the number of elements
  int arr[] = {10,20,30,40,50,60,70,80,90,100};
  
  int arr2[10]; // this array can take 10 elements
  
  int i,j;
  
  // NOTE: here we are simoltaniously 
  // 1. increasing the value of i to go forward
  // 2. decreasing the value of j to go backwards 
  for (i=0, j=9; i<10; i++, j--)
  {
    // NOTE: set the first value of arr as the last element or arr2
    // Inverting the array
    arr2[j] = arr[i];
  }


  // NOTE: we are putting the inverted list back into arr
  for (i=0; i<10; i++)
  {
    arr[i] = arr2[i];
  }


  // Printing out the values of each element in the array with index
  for (i=0; i<10; i++)
  {
    printf("arr[%d] = %d\n",i,arr[i]);
  }

  return 0;
}
