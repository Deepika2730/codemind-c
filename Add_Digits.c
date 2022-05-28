#include<stdio.h>
int digsum(int n)
{
    int sum=0;
    
    while(n>0 || sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digsum(digsum(n)));
    return 0;
}