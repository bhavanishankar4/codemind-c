#include<stdio.h>
int main()
{
    int n,r,k,sum=0;
    scanf("%d",&n);             
    k=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(k%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
