#include<stdio.h>
int main()
{
    int i,n,l;
    scanf("%d%d",&n,&l);
    for(i=1;i<=l;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}