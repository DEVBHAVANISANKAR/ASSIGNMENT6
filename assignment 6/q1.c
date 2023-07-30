//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
       
        sum+=a;
        
    }
    printf("%d",sum);
    return 0;


}