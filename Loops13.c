#include <stdio.h>

int main()
{
    int t1=0,t2=1,t3,n,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    
    printf("The series is:\n");
    printf("%d %d",t1,t2);
    for(i=0;i<=n-3;i++)
      {
           t3=t1+t2;
           printf(" %d",t3);
         
           t1=t2;
           t2=t3;
      }
   
    return 0;
}
