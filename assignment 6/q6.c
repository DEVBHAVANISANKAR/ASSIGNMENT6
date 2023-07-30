//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int n,a,sum=1;
    printf("enter the number : ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
      sum*=a;
       
       
    }
        
        
    
    printf("%d",sum);
    return 0;


}