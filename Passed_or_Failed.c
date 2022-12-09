#include <stdio.h>
int main()
{
    int eng,mat,phy,che,com;
    scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&com);
    if(eng>=35 && mat>=35 && phy>=35 && che>=35 && com>=35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}