#include <stdio.h>

int main()
{
    int i,n,s=0;
    
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
     {
         scanf("%d",&n);
         if(n%2!=0)
          s=s+n;
     } 
         
         
     printf("The sum of  odd numbers:%d",s);
     
    

    
    
    return 0;
}
