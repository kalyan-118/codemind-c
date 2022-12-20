#include<stdio.h>
int main()
{
    int a,b,c,d,e,s;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=(a+b+c+d+e)/5;
    if(s>=90){printf("Grade A");}
    else if(s>=80 && s<90)
    { 
        printf("Grade B");
        
    }
    else if(s>=70 && s<80)
    {
        printf("Grade C");
        
    }
    else if(s>=60 && s<70)
    {
        printf("Grade D");
        
    }
    else if(s>=40 && s<60)
    {
        printf("Grade E");
        
    }
    else if(s<40)
    {
        printf("Grade F");
        
    }
    
    
}