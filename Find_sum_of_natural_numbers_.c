#include<stdio.h>
int main()
{
    int n,i,sum=0,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        count++;
    }
    printf("%d",sum);
    
    
}