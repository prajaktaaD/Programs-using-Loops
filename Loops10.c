#include <stdio.h>

int main()
{
    int num,i,f;
   
    printf("Enter a  num:");
    scanf("%d",&num);
    
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        f=1;
        
        else
        f=0;
    }
    if(f==0)
     printf("It is prime num:");
    
    else
     printf("It is not a prime number:");
}
