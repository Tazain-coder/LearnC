/*
* Finding the sum of a series
*/
#include <stdio.h>


void main()
{
  // declare variables
  double num, sum = 0 ,i;
  
  // Asking for the lenth of the series from the user
  printf("Enter the series lenth: ");
  scanf("%lf", &num);

  // for loop to enumerate though the values of i (each value of number)
  for (i = 1; i <= num;i++) {
    // adding the value to sum after dividing with i (ex: 1/1 = 1 , 1/2 = 0.50, 1/3= 0.33~)
    sum = sum + (1/i);
    
    // some prints for visual
    if (i == 1)
      printf("1 + ");
    else if (i == num)
      printf("(1 / %.0lf)", i);
    else
      printf("(1 / %.0lf) + ", i);
  }
  printf("\n The final sum is: %.2lf\n",sum);

}
