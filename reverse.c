#include <stdio.h>
void main() 
{
    int number, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) 
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    printf("Reverse of the number: %d\n", reverse);
}
