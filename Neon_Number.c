#include<stdio.h>
int main()
{
    int i,n,s,sm=0;
    scanf("%d",&n);
    s=n*n;
    for(i=s;i>0;i/=10)
    {
        sm+=(i%10);
    }
    if(sm==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}