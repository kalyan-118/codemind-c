#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) //1 1<=5 2<=5 3 4 5 6<=5
    {
        s=s+i; //s=s+i=0+1=1 s=s+i=1+2=3=6+4=10
    }
    printf("%d",s);
}