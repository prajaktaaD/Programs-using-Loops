#include <stdio.h>

int main()
{
    int i,f,cnt=0,n=1;
    while(cnt<=50)
    {
        for(i=2;i<n;i++)
          {
              if(n%i==0)
              {
                 f=1;
                 break;
                 
              }
             
              
              else
              {
                  f=0;
              }
          }
          
          
              if(f==0)
             {   printf("%d ",n);
                 cnt++;
             }         
        
        n++;
        
    }
    return 0;
}
