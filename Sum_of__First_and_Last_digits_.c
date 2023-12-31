#include<stdio.h>
int main()
{
    int n,I,f,sum=0;
    scanf("%d",&n);
    I=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    f=n;
    sum=f+I;
    printf("%d",sum);
    
}