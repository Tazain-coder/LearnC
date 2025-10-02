#include <stdio.h>

int main()
{
    // initial Variable Setup
    int i,n,fact=1;

    printf("enter the number: ");
    scanf("%d",&n);

    // Loop for the amount of terms that need to be Calculated
    for(i=1;i<=n;i++)
    {
        // multiply the intial number with the next one
        fact = fact * i;
    }

    // print out the final output
    printf("%d\n",fact);
    return 0;

}