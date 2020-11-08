#include <stdio.h>

int main()
{
    int i,n,even_cnt=0,odd_cnt=0;
    
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
     {
         scanf("%d",&n);
         if(n%2==0)
           even_cnt++;
         
         else
          odd_cnt++;
     }
     
     printf("The even numbers are:%d",even_cnt);
     printf("The odd numbers are:%d",odd_cnt);    
    

    
    
    return 0;
}
