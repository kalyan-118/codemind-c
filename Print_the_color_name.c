#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='V')
    {
        printf("Violet");
    }
    else if(ch=='I')
    {
        printf("Blue");
    }
    else if(ch=='G')
    {
        printf("Green");
    }
    else if(ch=='Y')
    {
        printf("Yellow");
    }
    else if(ch=='O')
    {
        printf("Orange");
    }
    else if(ch=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}