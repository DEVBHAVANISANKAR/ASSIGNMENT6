//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
       
        sum+=(a*a*a);
    }
        
        
    
    printf("%d",sum);
    return 0;


}