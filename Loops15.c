#include<stdio.h>
int main()
{
  int n,i,s=0,r,k=0;
  printf("\n Enter num:");
  scanf("%d",&n);

  while(n>0)
  {
    r=n%2;
    s=s*10+r;
    k++;
    n=n/2;
  }
  
  printf("\nIn Bin:");
  for(i=0;i<k;i++)
  {
    r=s%10;
    printf("%d",r);
    s=s/10;
  }
  
  return 0;
}
