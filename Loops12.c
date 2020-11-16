#include <stdio.h>

int main()
{
    int num,f=1,i;
    printf("Enter the num:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    f=f*i;
    
    printf("Factorial of num=%d",f);
   
    return 0;
}
