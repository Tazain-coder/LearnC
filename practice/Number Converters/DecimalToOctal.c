#include <stdio.h>

int main()
{
    int number;
    printf("Decimal number = ");
    scanf("%d", &number);

    // We can direcly convert to Ocatal with the %o module

    printf("Octal number = %o \n", number);

    return 0;
}