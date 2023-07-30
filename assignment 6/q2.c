//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(a=1;a<=n*2;a++)
    {
       if(a%2==0)
       {
        sum+=a;
       }
        
        
    }
    printf("%d",sum);
    return 0;


}