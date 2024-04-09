#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x,y;
    printf("Enter the values");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    if(d>=0)
    {
        x=(-b+d)/(2*a);
        y=(-b-d)/(2*a);
        printf("%f and %f are the roots",x,y);
    }
    else
    {
        printf("It has imaginary roots");
    }
}