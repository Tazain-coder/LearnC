/*
* Find the Radius of a circle
*
*/

#include <stdio.h>

int main() 
{
  int radius;
  float area;
  const float pi=3.1416;
  printf("Enter The radius: ");
  scanf("%d", &radius);

  area = pi * radius * radius;

  printf("%f\n", area);
}
