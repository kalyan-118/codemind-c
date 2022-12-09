#include <stdio.h>
int main()
{
    float b1,b2,h,area;
    scanf("%f%f%f",&b1,&b2,&h);
    area=(b1+b2)/2*h;
    printf("%0.4f",area);
}