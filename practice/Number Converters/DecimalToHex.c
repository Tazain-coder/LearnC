#include <stdio.h>

int main()
{
    int number;
    printf("Decimal number = ");
    scanf("%d", &number);

    // We can direcly convert to Hex with the %x module

    printf("Hexadecimal number = %x \n", number);

    return 0;
}