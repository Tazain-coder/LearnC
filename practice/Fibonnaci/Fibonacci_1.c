/*
Fibonacci Sequence with Loops
*/



#include <stdio.h>

int main()
{
    // intial variable setup
    int i,n,x[100];

    // Take input for how many terms to generate
    printf("Enter A range: ");
    scanf("%d", &n);

    // setup the initial Values in the array
    x[0] = 0;
    x[1] = 1;

    // Loop for generating terms in the sequesncee
    for (i=2; i<n; i++)
    {
        //sets the array value as the sum of the previous 2 values
        x[i] = x[i-1] + x[i-2];
    }

    // print out all the valaue in order
    for (i=0;i<n;i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}