#include <stdio.h>

int main()
{
    int num,m,s=0,r;
    printf("Enter the num:");
    scanf("%d",&num);
    m=num;
    while(num!=0)
    {
         r=num%10;
         s=s*10+r;
         num=num/10;
    }
    
    if(s==m)
     printf("It is palindrome number:");
     
    else
     printf("It is not a plaindrome number:");
    
    return 0;
}
