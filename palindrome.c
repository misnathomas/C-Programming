#include<stdio.h>
void main()
{
    int r,n,m,s=0;
    printf("Enter the number");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(s==m)
    printf("Number is palindrome %d",m);
    else
    printf("Number is not palindrome %d",m);
}
