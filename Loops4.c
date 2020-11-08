#include <stdio.h>

int main()
{
    int i,j,m,n;
    printf("Enter the value of m and n:");
    scanf("%d%d",&m,&n);
    
    printf("The multiplication table from m to n is such that m<n:");
    for(i=m;i<=n;i++)
    {
      for(j=1;j<=10;j++)
        printf("%d ",j*i);
        
      printf("\n");
    }  
    
    return 0;
}
