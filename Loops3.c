#include <stdio.h>

int main()
{
    int i,num;
    printf("Enter the num:");
    scanf("%d",&num);
    
    printf("The multiplication table of num is:");
    for(i=1;i<=10;i++)
    printf("%d ",i*num);
    
    return 0;
}
