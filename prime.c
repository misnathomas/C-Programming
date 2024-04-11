#include<stdio.h>
void main()
{
    int n,prime=0,composite=0;
    printf("Enter a number");
    scanf("%d",&n);
    if(n==1)
    printf("One is neither prime nor composite");
    else if(n==2)
    printf("Two is a prime number");
    else
    {
        for(int i=2;i<=(n/2);i++)
        {
            if(n%i==0)
            {
                composite=1;
                break;
            }
        }
        if(composite==1)
        printf("Number is not prime");
        else
        printf("Number is prime");
    }
}
