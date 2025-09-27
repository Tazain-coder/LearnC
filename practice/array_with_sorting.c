/*
* Array with Simple sorting
*/

#include <stdio.h>

int main() 
{
  // Simple Variable setup for Array movement
  // NOTE: Make a Temp Variable to store the value temporarily
  int i,j,k,n,Temp;

  // takes input on How many inputs will be given in the array
  printf("Enter the Array: \n");
  scanf("%d",&n);   // Takes input and stored in a Variable n

  // Initialize the array
  int x[n];

  // loop until less than n and keep taking input for elements of Array
  for(k=0; k<n; k++)
  {
    scanf("%d", &x[k]);
  }

  // NOTE: There are 2 loops which act like pointers and they compare 2 values
  // * if the 1st value is greater than the second take the 1st value in the Temp Variable
  // * then set the 1st Variable as the Second Variable 
  // * since the 2nd value has been moved to the 1st position now the 2nd position can be set as the first value

  for (i=0; i<=n-2;i++) // the Fist loop or the first point which will stop 1 values before the end
    for (j=i+1; j<=n-1; j++) // the second loop or the second point will end at the end
    {
      if (x[i]>x[j]) // checks if the value of position i is greater than position j
      {
        Temp = x[i]; // sets the value of Temp to be the i number position of the array
        x[i] = x[j]; // value os changed to be the j'th position value 
        x[j] = Temp; // set the value of the j position to be the i th position as it was saved in Temp
      }
    }


    // Prints the sorted Array

    for(k=0;k<n;k++){
      printf("%d ",x[k]);
    }
  return 0;
}
