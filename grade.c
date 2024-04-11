#include<stdio.h>
void main()
{
    float e,c,b,n;
    int r;
    printf("Enter the roll number");
    scanf("%d",&r);
    printf("Enter the marks of three subjects");
    scanf("%f%f%f",&e,&c,&b);
    n=((e+c+b)/300)*100;
    printf("Roll number %d,your",r);
    if((n>90)&&(n<=100))
    {
        printf("grade is A+");
    }
    else
    if((n>80)&&(n<=90))
    {
        printf("grade is A");
    }
    else
    if((n>70)&&(n<=80))
    {
        printf("grade is B+");
    }
    else
    if((n>60)&&(n<=70))
    {
        printf("grade is B");
    }
    else
    if((n>50)&&(n<=60))
    {
        printf("grade is C+");
    }
    else
    if((n>40)&&(n<=50))
    {
        printf("grade is C");
    }
    else
    if(n<40)
    printf("Failed");
    else
    {
        printf("INVALID INPUT");
    }
}
