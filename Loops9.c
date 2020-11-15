#include <stdio.h>

int main()
{
    int num,m,r,s=0;
   
    printf("Enter a three digit num:");
    scanf("%d",&num);
    m=num;
    while(num!=0)
    {
        r=num%10;
        s=s+r*r*r;
        num=num/10;
    }
    if(s==m)
     printf("It is a amstrong number:");
    
    else
     printf("It is not a amstrong number:");
}
