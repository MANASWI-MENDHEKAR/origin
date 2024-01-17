#include<stdio.h>
int main()
{
    int n,i, fact=1;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    printf("factorial of %d is:%d\n",n,fact);
    return 0;

}


