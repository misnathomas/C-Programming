#include<stdio.h>
void main()
{
    int n,r,t,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(t==sum)
    printf("The number is armstrong");
    else
    printf("The number is not armstrong");
}
