#include <stdio.h>

int main()
{
    int number;
    printf("Decimal number = ");
    scanf("%d", &number);

    // We can direcly convert to binary with the %b module

    printf("Binary number = %b \n", number);

    return 0;
}