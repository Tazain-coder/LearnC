#include <stdio.h>

// Function to generate fibonacci number
int fib(int n)
{
    // if the number is less or equal to 1 return n
    if (n <= 1)
        return n;
    // Here the function is recusively calling itself to
    // find the next value by adding the previous 2 values
    else
        return fib(n-1) + fib(n-2);
}

int main()
{
    // simple variable setup
    int n,i;

    // get a range
    printf("Enter the range: ");
    scanf("%d", &n);

    // print the output
    for (i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}