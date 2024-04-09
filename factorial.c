#include<stdio.h>
void main()
{
    int n;
    int factorial=1;
    printf("Enter a positive integer");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("Factorial of %d=%d",n,factorial);
}