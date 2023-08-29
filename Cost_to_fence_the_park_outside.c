#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=((a+2*c)*(b+2*c))-(a*b);
    printf("%d",e*d);
    return 0;
}