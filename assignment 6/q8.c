//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;

        }
    }   
    if(flag==1) 
     printf("not a prime ");
    else
    printf("prime");
    
    return 0;


}
