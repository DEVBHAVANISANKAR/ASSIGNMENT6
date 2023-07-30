//Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n,rem,reverse=0;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n!=0)
    {
       rem=n%10;
       n=n/10;
       reverse=reverse*10+rem;

      
       
    }
        
        
    
    printf("%d",reverse);
    return 0;


}