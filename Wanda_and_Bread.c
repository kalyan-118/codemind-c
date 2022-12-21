#include <stdio.h>
int main ()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(k*m>=n)
    {
        printf("YES");
    }
    else if(k*m<=n)
    {
        printf("NO");
    }
}